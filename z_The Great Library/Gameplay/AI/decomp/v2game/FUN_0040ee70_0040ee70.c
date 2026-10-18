// FUN_0040ee70 @ 0040ee70 body=[[0040ee70, 0040f004] [0040f008, 0040f015] [0040f019, 0040f029] [0040f02d, 0040f03e]]


void FUN_0040ee70(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int *piStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 *puStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_34 [4];
  int iStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b60be8;
  local_14 = ExceptionList;
  iVar1 = *(int *)(in_ECX + 0x390);
  if (((iVar1 != 0) && (*(char *)(iVar1 + 0x1f0) != '\0')) &&
     (*(int *)(iVar1 + 0x218) == *(int *)(in_ECX + 0x3a4))) {
    ExceptionList = &local_14;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x7c) + 0x54) + 0x4c))(local_34);
    puStack_44 = (undefined4 *)0x0;
    iStack_40 = 0;
    uStack_3c = 0;
    uStack_c._0_1_ = 1;
    uStack_c._1_3_ = 0;
    FUN_004069c0(*(undefined4 *)(in_ECX + 0x390));
    if ((int)(iStack_40 - (int)puStack_44 & 0xfffffffcU) < 1) {
      piStack_54 = (int *)0x0;
      iStack_50 = 0;
      uStack_4c = 0;
      uStack_c._0_1_ = 2;
      FUN_00406d40(*(undefined4 *)(in_ECX + 0x390));
      piVar2 = piStack_54;
      if ((int)(iStack_50 - (int)piStack_54 & 0xfffffffcU) < 1) {
        if (iStack_24 == 0) {
          **(undefined4 **)(in_ECX + 0x398) = 0;
          FUN_0040f4d0();
        }
        else {
          FUN_00408ed0(local_34,0,0xffffffff);
        }
      }
      else {
        iVar1 = *piStack_54;
        if (iStack_24 == 0) {
          FUN_00401e00(*(undefined4 *)(in_ECX + 0x390));
          **(undefined4 **)(in_ECX + 0x398) = 0;
          FUN_0040f4d0();
          *(undefined1 *)(*(int *)(in_ECX + 0x390) + 0x21c) = 1;
          piVar2 = piStack_54;
        }
        else {
          uStack_5c = *(undefined4 *)(iVar1 + 0x16c);
          uStack_58 = *(undefined4 *)(iVar1 + 0x170);
          FUN_00986c90(&uStack_5c,local_34,0,*(undefined4 *)(iVar1 + 0x1ac),0,0);
          *(undefined1 *)(*(int *)(in_ECX + 0x390) + 0x21c) = 1;
        }
      }
      if (piVar2 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar2);
      }
    }
    else {
      FUN_00405fb0(*puStack_44,local_34);
    }
    if (puStack_44 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puStack_44);
    }
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
  }
  ExceptionList = local_14;
  return;
}

