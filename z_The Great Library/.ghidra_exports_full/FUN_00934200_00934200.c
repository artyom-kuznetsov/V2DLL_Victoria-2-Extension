// FUN_00934200 @ 00934200 body=[[00934200, 0093427c]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00934200(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  
  FUN_0068f390();
  puVar2 = (undefined4 *)FUN_00aae9af(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    _DAT_012588d0 = _DAT_012588d0 + 1;
    *puVar2 = CHistoryEntry::vftable;
    puVar2[1] = 0x18d;
    puVar2[2] = 43800000;
    puVar2[2] = DAT_01259abc;
    puVar2[3] = unaff_ESI;
    *puVar2 = CBattleResultChange::vftable;
    puVar2[4] = 0;
  }
  iVar1 = DAT_012588e8;
  puVar2[4] = param_1;
  puVar2[2] = *(undefined4 *)(iVar1 + 0xb0c);
  (**(code **)(*(int *)(unaff_ESI + 0x4c) + 0x18))(puVar2);
  return;
}

