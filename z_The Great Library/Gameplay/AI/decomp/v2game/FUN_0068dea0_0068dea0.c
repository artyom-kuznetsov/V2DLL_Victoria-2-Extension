// FUN_0068dea0 @ 0068dea0 body=[[0068dea0, 0068df10]]


void FUN_0068dea0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  int unaff_ESI;
  
  iVar1 = *(int *)(*(int *)(unaff_ESI + 0xc10) + 0x18);
  uVar2 = FUN_00444f10(unaff_ESI + 0xb0c);
  if (*(int *)(extraout_ECX + 0x18) != iVar1) {
    FUN_004449f0(*(undefined1 *)(extraout_ECX + 0x1c),unaff_ESI + 0xb0c);
  }
  FUN_00444da0(uVar2,param_1,param_2);
  if (*(int *)(*(int *)(unaff_ESI + 0xacc) + param_2 * 4) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(unaff_ESI + 0xacc) + param_2 * 4) + 0x354) =
         *(undefined4 *)(DAT_012588e8 + 0xb0c);
  }
  return;
}

