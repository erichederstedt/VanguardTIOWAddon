# VanguardTIOWAddon
This is a config addon for the There Is Only War mod being made for the 34th Vanguard.
This addon does a bunch of shit and I can't even keep track of all the shit it changes but check the steam workshop page for a semi-accurate change list.

Working PBOs:
vanguardtiowaddon - The main PBO where most of the misc tweaks happen. Ace compatibility(Which will be moved to it's own PBO at some point) and other shit.
vng_tiow_vanilla_compat - Where all the *almost* all weapons are rebalanced towards vanilla.
vng_units - Adds 34th Vanguard units into the game.
Non-working PBOs:
vng_thunderbolt_fix - Will either tweak or completely rework the thunderbolt flight model.
Planned PBOs:
vng_wep - Will be used for adding weapons into the game like a Triplex lasgun being worked on.
vng_tiow_ace_compat - Will be the place where the ace compatibility is added.

Workflow:
Currentlly using Addon Builder with the only additional settings being applied is the "List of files to copy directly" being *.p3d;*.paa;*.ogg;*.sqf and path to my private key being assigned to atomatically sign PBOs. I do have plans to later on switch to armake2 once I can get it to fucking compile on Windows(Have no issues doing it on linux but I can't cross-compile).
An example on how my file structure looks like: https://github.com/OnkelDolf/ArmaWork

Rules for commiting:
- Always pull before pushing in case someone has done some work.
- All PBOs need to have a defined purpouse for existing with all changes not deserving of their own PBO going into the vanguardtiowaddon PBO. Examples: vng_units adds Vanguard Units and vng_tiow_vanilla_compat adds vanilla compatibility and so on.
- Names of PBOs must describe what purpouse it serves. Examples: vng_units adds Vanguard Units and vng_tiow_vanilla_compat adds vanilla compatibility and so on.
- PBOs should also go by the naming scheme and file structure outlined in the workflow example linked above with vng being the tag and should always be all lowercase for linux compatibility.
- Keep all the shitty IDE project files out of the repository like .code-workspace ect.

Discord: Onkel Dolf#9167 <br />
Steam Workshop: https://steamcommunity.com/sharedfiles/filedetails/?id=1811025521 <br />
Template Creator: Sabre One <br />
Template: https://github.com/silentghoust/TIOW-ACE-Compatability-Mod
