#!/bin/bash

# Ensure the script is executed inside a Git repository
if ! git rev-parse --is-inside-work-tree; then
    echo "Error: Not inside a Git repository."
    echo "Current Directory: $(pwd)"
    echo "Git Version: $(git --version)"
    pause
fi

# Get the list of existing branches (Windows-compatible version)
EXISTING_BRANCHES=$(git branch --all | sed 's|remotes/origin/||' | sed 's|\*||' | sort -u)

# Set default branch
DEFAULT_BRANCH="main"

# Prompt user to select or create a branch
echo "Available branches:"
echo "$EXISTING_BRANCHES"
echo "Enter the branch name (press Enter to use '$DEFAULT_BRANCH', or type 'new' to create a new branch):"
read -r BRANCH

# Use default branch if no input is given
BRANCH=${BRANCH:-$DEFAULT_BRANCH}

# If the user wants to create a new branch
if [ "$BRANCH" = "new" ]; then
    echo "Enter the new branch name:"
    read -r NEW_BRANCH
    git checkout -b "$NEW_BRANCH"
    BRANCH="$NEW_BRANCH"
else
    git checkout "$BRANCH"
fi

# Ask for a commit message
echo "Enter commit message:"
read -r COMMIT_MSG

# If no message is provided, use a default one
COMMIT_MSG=${COMMIT_MSG:-"Automated commit on $(date)"}

# Check if there are changes
if git diff --quiet && git diff --staged --quiet; then
    echo "No changes to commit."
    exit 0
fi

# Add all changes
git add .

# Commit changes
git commit -m "$COMMIT_MSG"

# Push to the selected branch
git push origin "$BRANCH"

echo "Changes have been committed and pushed to '$BRANCH' successfully!"

pause
