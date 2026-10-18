// FUN_009a3330 @ 009a3330 body=[[009a3330, 009a3434] [009a3438, 009a3464] [009a3468, 009a3491]]


/* WARNING: Removing unreachable block (ram,0x009a345b) */

undefined4 FUN_009a3330(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uStack_38;
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b8b610;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*(int *)(in_ECX + 0x34) + 4))(param_1);
  if (iVar1 == 0) {
    (**(code **)(*(int *)(in_ECX + 0x34) + 8))("defaultTextBox");
    iVar1 = *(int *)(in_ECX + 0x30);
    uVar2 = FUN_00a5e020(iVar1,in_ECX,0,*(undefined4 *)(iVar1 + 0x6b9bc),
                         *(undefined4 *)(iVar1 + 0x6b9c0));
    FUN_00409350("ERROR: The textbox didn\'t exist",0x1f);
    puStack_10 = (undefined1 *)0x0;
    FUN_00988f20(param_1);
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
    FUN_009e7500();
    if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_38);
    }
    puStack_10 = (undefined1 *)0xffffffff;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x30);
    uVar2 = FUN_00a5e020(iVar1,in_ECX,0,*(undefined4 *)(iVar1 + 0x6b9bc),
                         *(undefined4 *)(iVar1 + 0x6b9c0));
  }
  FUN_0068f390();
  ExceptionList = pvStack_18;
  return uVar2;
}

