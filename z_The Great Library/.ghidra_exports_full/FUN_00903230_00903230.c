// FUN_00903230 @ 00903230 body=[[00903230, 009032ca] [009032ce, 00903359] [0090335d, 0090337c] [00903380, 00903398]]


undefined4 FUN_00903230(undefined4 param_1,int param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uStack_78;
  undefined4 uStack_70;
  uint uStack_5c;
  undefined4 uStack_54;
  undefined1 local_50 [16];
  uint uStack_40;
  undefined4 uStack_38;
  undefined1 local_34 [16];
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b65590;
  pvStack_14 = ExceptionList;
  if (*(char *)(in_ECX + 0x1c) == param_3) {
    ExceptionList = &pvStack_14;
    uVar1 = (**(code **)(**(int **)(*(int *)(param_2 + 0x14) + 100) + 0x1c))(local_50);
    puStack_10 = (undefined1 *)0x0;
    uVar2 = FUN_00974c50(*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x6c));
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,1);
    FUN_0043ec10(param_1,&DAT_00e2f71c,uVar2,"WHERE",uVar1);
    uStack_38 = uStack_54;
    uStack_24 = uStack_40;
    if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(0);
    }
  }
  else {
    ExceptionList = &pvStack_14;
    uVar1 = (**(code **)(**(int **)(*(int *)(param_2 + 0x14) + 100) + 0x1c))(local_34);
    puStack_10 = (undefined1 *)0x2;
    uVar2 = FUN_00974c50(*(undefined4 *)(*(int *)(param_2 + 0x14) + 0x6c));
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,3);
    FUN_0043ec10(param_1,&DAT_00e2f71c,uVar2,"WHERE",uVar1);
    if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(uStack_70);
    }
  }
  if (uStack_24 < 0x10) {
    ExceptionList = pvStack_18;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(uStack_38);
}

