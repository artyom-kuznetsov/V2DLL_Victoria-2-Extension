// FUN_00841900 @ 00841900  (requested 00841900, first bytes: 55 8B EC 83 EC 10 F3 0F)


int FUN_00841900(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EDI;
  undefined4 uVar4;
  undefined4 local_c;
  int local_8;
  
  uVar4 = 0;
  FUN_00401000(0x43fa4001);
  uVar2 = FUN_00b31c00();
  local_c = *(undefined4 *)(unaff_EDI + 8);
  local_8 = *(int *)(unaff_EDI + 0xc);
  iVar3 = FUN_00834150(&param_1,&local_c,0,uVar2,uVar4);
  local_c = *(undefined4 *)(unaff_EDI + 8);
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xc) * 4) + 0x67c) !=
      '\0') {
    puVar1 = *(undefined4 **)(DAT_012588e8 + 0xb3c);
    local_8 = 0;
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
      FUN_00832dd0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + param_2 * 4),
                   *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 0xc) * 4),
                   *puVar1,&local_8);
    }
    iVar3 = iVar3 + local_8;
  }
  return iVar3;
}

