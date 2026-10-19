# Normal-launcher Army handoff - 2026-10-18

User explicitly rejected launch scripts as well as an installer.
Current artifact: work/Army-Templates-Conform-0.8.1-mod-only.zip.
Contains only mod/ (generated Army package, descriptor, 0.8.1 plugin) and README.
No .ps1/.cmd/.bat/.py/.exe. Archive CRC and staged plugin hash verified.
Previous ZIPs retained but superseded for this handoff.

Correction to previous advice: scripts are unnecessary for the supported pair.
report-mod-2-1018.md section 6 records the normal launcher's Army-only run as
-mod=mod/tgcx_army_tgc252.mod -mod=mod/TGC_v2.5.2.mod. P50 established display-name
ordering. The current descriptor starts with Army and the base starts with TGC,
so Army is first, as the V2DLL loader needs. This is observed launcher behavior,
not a new in-game V2DLL 0.8.1 test. The README limits selection to Army plus TGC;
additional selected mods could put another folder first.

Recipient: extract into game folder, ensure V2DLL LOAD_DLL_FROM_MOD_FOLDER=1,
select Army and TGC v2.5.2 in the normal launcher, click Play. No base descriptor
filename edit is required. No installation or game launch was performed here.
0.8.1 game check U-12 remains pending; all existing card instructions are current.
