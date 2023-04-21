#!/bin/bash

# Prompt the user for the filename and commit message
read -p "Bigman Enter the filename: " filename
read -p "And also Enter the commit message: " message

# Add the file to the Git repository
git add $filename

# Commit the changes
git commit -m "$message"

# Push the changes to the remote repository
git push
