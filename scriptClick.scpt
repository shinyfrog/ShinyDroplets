tell application "Finder"
	if selection is {} then
		tell application "APP"
			activate
		end tell
	else
		set finderSelection to selection as alias list
		tell application "APP"
			open finderSelection
			activate
		end tell
	end if
end tell
