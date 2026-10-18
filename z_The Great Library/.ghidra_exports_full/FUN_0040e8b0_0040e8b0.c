// FUN_0040e8b0 @ 0040e8b0 body=[[0040e8b0, 0040ea78] [0040ea7c, 0040ea89] [0040ea8d, 0040ea9a] [0040ea9e, 0040eaaf] [0040eac7, 0040ec89] [0040ec8d, 0040ecb3]]


/* WARNING: Removing unreachable block (ram,0x0040ea55) */
/* WARNING: Removing unreachable block (ram,0x0040ea73) */

void FUN_0040e8b0(int *param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  int iStack_74;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 *puStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 *puStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b4dd70;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(*param_1 + 0x80))();
  if (iVar1 == 6) {
    iVar1 = *(int *)(in_ECX + 0x390);
    if (((iVar1 != 0) && (*(char *)(iVar1 + 0x1f0) != '\0')) &&
       (*(int *)(iVar1 + 0x218) == *(int *)(in_ECX + 0x3a4))) {
      puStack_34 = (undefined4 *)0x0;
      iStack_30 = 0;
      uStack_2c = 0;
      uStack_c = 0;
      FUN_004069c0(iVar1);
      iStack_74 = 0;
      iVar1 = iStack_30 - (int)puStack_34 >> 2;
      if (0 < iVar1) {
        do {
          FUN_00401cb0(puStack_34[iStack_74]);
          iStack_74 = iStack_74 + 1;
        } while (iStack_74 < iVar1);
      }
      puStack_44 = (undefined4 *)0x0;
      iStack_40 = 0;
      uStack_3c = 0;
      uStack_c = CONCAT31(uStack_c._1_3_,1);
      FUN_00406a60(*(undefined4 *)(in_ECX + 0x390));
      iStack_74 = 0;
      iVar1 = iStack_40 - (int)puStack_44 >> 2;
      if (0 < iVar1) {
        do {
          FUN_00401d80(*(undefined4 *)((int)puStack_44 + iStack_74 * 4));
          iStack_74 = iStack_74 + 1;
        } while (iStack_74 < iVar1);
      }
      iVar2 = 0;
      iStack_60 = 0;
      iStack_5c = 0;
      uStack_58 = 0;
      uStack_c = CONCAT31(uStack_c._1_3_,2);
      FUN_00406b00(*(undefined4 *)(in_ECX + 0x390));
      iVar1 = iStack_5c - iStack_60 >> 2;
      if (0 < iVar1) {
        do {
          FUN_00401e00(*(undefined4 *)(in_ECX + 0x390));
          iVar2 = iVar2 + 1;
        } while (iVar2 < iVar1);
      }
      uStack_c = CONCAT31(uStack_c._1_3_,3);
      FUN_00406d40(*(undefined4 *)(in_ECX + 0x390));
      if (iStack_60 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iStack_60);
      }
      if (puStack_44 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puStack_44);
      }
      if (puStack_34 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puStack_34);
      }
    }
  }
  else {
    if ((((iVar1 == 5) && (iVar2 = *(int *)(in_ECX + 0x390), iVar2 != 0)) &&
        (*(char *)(iVar2 + 0x1f0) != '\0')) && (*(int *)(iVar2 + 0x218) == *(int *)(in_ECX + 0x3a4))
       ) {
      puStack_44 = (undefined4 *)0x0;
      iStack_40 = 0;
      uStack_3c = 0;
      uStack_c = 4;
      FUN_004069c0(iVar2);
      puVar3 = puStack_44;
      if ((int)(iStack_40 - (int)puStack_44 & 0xfffffffcU) < 1) {
        puStack_34 = (undefined4 *)0x0;
        iStack_30 = 0;
        uStack_2c = 0;
        uStack_c._0_1_ = 6;
        FUN_00406d40(*(undefined4 *)(in_ECX + 0x390));
        if ((int)(iStack_30 - (int)puStack_34 & 0xfffffffcU) < 1) {
          FUN_009885d0();
          uStack_c._0_1_ = 8;
          (**(code **)(*(int *)(*(int *)(in_ECX + 0x7c) + 0x54) + 0x40))(&iStack_60);
          uStack_c._0_1_ = 6;
          FUN_00408ad0();
          FUN_009885d0();
          uStack_c = CONCAT31(uStack_c._1_3_,9);
          FUN_00408ed0(&iStack_60,0,0xffffffff);
          FUN_00408ad0();
          *(undefined1 *)(*(int *)(in_ECX + 0x398) + 0xe4) = 1;
        }
        else {
          FUN_00401580(*puStack_34);
          uStack_c = CONCAT31(uStack_c._1_3_,7);
          (**(code **)(*(int *)(*(int *)(in_ECX + 0x7c) + 0x54) + 0x40))(&iStack_60);
          *(undefined1 *)(*(int *)(in_ECX + 0x398) + 0xe4) = 0;
          FUN_00408ad0();
        }
        uStack_c = CONCAT31(uStack_c._1_3_,4);
        FUN_00461f90();
        puVar3 = puStack_44;
      }
      else {
        FUN_00406340(*puStack_44);
        uStack_c._0_1_ = 5;
        (**(code **)(*(int *)(*(int *)(in_ECX + 0x7c) + 0x54) + 0x40))(&puStack_34);
        *(undefined1 *)(*(int *)(in_ECX + 0x398) + 0xe4) = 0;
        uStack_c = CONCAT31(uStack_c._1_3_,4);
        FUN_00408ad0();
      }
      FUN_009b6400(*(undefined4 *)(in_ECX + 0x7c));
      *(undefined2 *)(*(int *)(in_ECX + 0x7c) + 0x4c) = 1;
      uStack_c = 0xffffffff;
      if (puVar3 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar3);
      }
    }
    **(int **)(in_ECX + 0x398) = iVar1;
    FUN_0040f4d0();
  }
  ExceptionList = pvStack_14;
  return;
}

