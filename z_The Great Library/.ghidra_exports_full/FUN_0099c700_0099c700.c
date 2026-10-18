// FUN_0099c700 @ 0099c700 body=[[0099c700, 0099ca79] [0099ca7d, 0099ca98] [0099ca9c, 0099cab7] [0099cabb, 0099caf3] [0099caf7, 0099cb08]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0099c700(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 ***pppuVar5;
  int *in_ECX;
  int unaff_EDI;
  undefined4 **local_88 [5];
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int *local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4f738;
  local_10 = ExceptionList;
  if (*(char *)(*(int *)(unaff_EDI + 0x6bc48) + 0x50) != '\0') {
    ExceptionList = &local_10;
    piVar1 = (int *)(**(code **)(*in_ECX + 0x38))();
    if ((piVar1[1] - *piVar1 & 0xfffffffcU) != 0) {
      if ((_DAT_013f288c & 1) == 0) {
        _DAT_013f288c = _DAT_013f288c | 1;
        DAT_013f19bc = 0;
        DAT_013f19c0 = 0;
        DAT_013f19c4 = DAT_00f095b4;
      }
      (**(code **)(*in_ECX + 0x38))();
      FUN_00a2e4a0(param_2);
      local_14 = (int *)0x0;
      (**(code **)(**(int **)(unaff_EDI + 100) + 0x98))(*(int **)(unaff_EDI + 100),0,&local_14);
      iVar2 = (**(code **)(**(int **)(unaff_EDI + 0x6bc50) + 0x48))
                        (*(int **)(unaff_EDI + 0x6bc50),0,&local_18);
      if (-1 < iVar2) {
        (**(code **)(**(int **)(unaff_EDI + 100) + 0x94))(*(int **)(unaff_EDI + 100),0,local_18);
        if (local_18 != (int *)0x0) {
          (**(code **)(*local_18 + 8))(local_18);
          local_18 = (int *)0x0;
        }
      }
      (**(code **)(**(int **)(unaff_EDI + 100) + 0x9c))(*(int **)(unaff_EDI + 100),0);
      iVar2 = (**(code **)(**(int **)(unaff_EDI + 100) + 0xa4))(*(int **)(unaff_EDI + 100));
      if (-1 < iVar2) {
        (**(code **)(**(int **)(unaff_EDI + 100) + 0xe4))(*(int **)(unaff_EDI + 100),0xe,0);
        (**(code **)(**(int **)(unaff_EDI + 100) + 0xe4))(*(int **)(unaff_EDI + 100),7,0);
        (**(code **)(**(int **)(unaff_EDI + 100) + 0xe4))(*(int **)(unaff_EDI + 100),0xf,0);
        (**(code **)(**(int **)(unaff_EDI + 100) + 0xe4))(*(int **)(unaff_EDI + 100),0x1b,0);
        (**(code **)(**(int **)(unaff_EDI + 100) + 0xe4))(*(int **)(unaff_EDI + 100),0x89,0);
        (**(code **)(**(int **)(unaff_EDI + 100) + 0xac))
                  (*(int **)(unaff_EDI + 100),0,0,1,0xffffffff,DAT_00f092fc,0);
        piVar1 = (int *)(**(code **)(*in_ECX + 0x38))();
        if ((piVar1[1] - *piVar1 & 0xfffffffcU) != 0) {
          (**(code **)(**(int **)(unaff_EDI + 0x6bc58) + 0xe8))
                    (*(int **)(unaff_EDI + 0x6bc58),"RenderShadow");
          (**(code **)(**(int **)(unaff_EDI + 0x6bc58) + 0xfc))
                    (*(int **)(unaff_EDI + 0x6bc58),&param_2,0);
          (**(code **)(**(int **)(unaff_EDI + 0x6bc58) + 0x100))(*(int **)(unaff_EDI + 0x6bc58),0);
          (**(code **)(**(int **)(unaff_EDI + 0x6bc58) + 0x104))(*(int **)(unaff_EDI + 0x6bc58));
          puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x38))();
          iVar2 = *(int *)*puVar3;
          puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x38))();
          FUN_009992a0(unaff_EDI,*(int *)*puVar3 + 0x160,iVar2 + 0x1a0,
                       *(undefined4 *)(unaff_EDI + 0x6bc58),1);
          (**(code **)(**(int **)(unaff_EDI + 0x6bc58) + 0x104))(*(int **)(unaff_EDI + 0x6bc58));
          (**(code **)(**(int **)(unaff_EDI + 0x6bc58) + 0x108))(*(int **)(unaff_EDI + 0x6bc58));
          (**(code **)(**(int **)(unaff_EDI + 0x6bc58) + 0x10c))(*(int **)(unaff_EDI + 0x6bc58));
        }
        (**(code **)(**(int **)(unaff_EDI + 100) + 0xa8))(*(int **)(unaff_EDI + 100));
        (**(code **)(**(int **)(unaff_EDI + 100) + 0xe4))(*(int **)(unaff_EDI + 100),0xe,1);
        (**(code **)(**(int **)(unaff_EDI + 100) + 0xe4))(*(int **)(unaff_EDI + 100),7,1);
        (**(code **)(**(int **)(unaff_EDI + 100) + 0xe4))(*(int **)(unaff_EDI + 100),0xf,1);
      }
      (**(code **)(**(int **)(unaff_EDI + 100) + 0x9c))
                (*(int **)(unaff_EDI + 100),*(undefined4 *)(unaff_EDI + 0x14));
      (**(code **)(**(int **)(unaff_EDI + 100) + 0x94))(*(int **)(unaff_EDI + 100),0,local_14);
      if (local_14 != (int *)0x0) {
        (**(code **)(*local_14 + 8))(local_14);
        local_14 = (int *)0x0;
      }
      if ((DAT_01258a78 != 0) && (DAT_01258a78 = DAT_01258a78 + -1, DAT_01258a78 == 0)) {
        D3DXSaveTextureToFileA("Shadow.png",3,*(undefined4 *)(unaff_EDI + 0x6bc50),0);
      }
      if (0 < DAT_01258a7c) {
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350(&DAT_00e38174,4);
        local_8 = 0;
        uVar4 = FUN_009888f0(local_6c);
        local_8._0_1_ = 1;
        FUN_00988fa0(uVar4);
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_00988f20(local_34);
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50);
        }
        local_3c = 0xf;
        local_40 = 0;
        local_50 = local_50 & 0xffffff00;
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_6c[0]);
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c[0] = local_6c[0] & 0xffffff00;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        pppuVar5 = (undefined4 ***)local_88[0];
        if (local_74 < 0x10) {
          pppuVar5 = local_88;
        }
        D3DXSaveTextureToFileA(pppuVar5,3,*(undefined4 *)(unaff_EDI + 0x6bc50),0);
        DAT_01258a7c = DAT_01258a7c + -1;
        if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_88[0]);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

