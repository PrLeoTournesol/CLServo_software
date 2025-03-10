#!/bin/bash

# Ensure the script is executed inside a Git repository
if ! git rev-parse --is-inside-work-tree; then
    echo "Error: Not inside a Git repository."
    echo "Current Directory: $(pwd)"
    echo "Git Version: $(git --version)"
    sleep 10
    exit 1
fi

# Get the list of existing branches (Windows-compatible version)
EXISTING_BRANCHES=$(git branch -r | sed 's|remotes/origin/||' | sed 's|\*||' | sort -u)

# Set default branch
DEFAULT_BRANCH="main"

# Prompt user to select or create a branch
echo "Available branches:"
echo "$EXISTING_BRANCHES"
echo "Enter the branch name (press Enter to use '$DEFAULT_BRANCH'):"
read -r BRANCH

# Use default branch if no input is given
BRANCH=${BRANCH:-$DEFAULT_BRANCH}

git pull origin "$BRANCH"

echo "'$BRANCH' was pulled successfully!"

sleep 5
