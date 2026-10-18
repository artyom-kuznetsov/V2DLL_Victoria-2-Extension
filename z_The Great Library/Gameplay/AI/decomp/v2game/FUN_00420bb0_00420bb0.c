// FUN_00420bb0 @ 00420bb0 body=[[00420bb0, 00420c8a] [00420c8e, 00420d4f] [00420d53, 00420d6e] [00420d72, 00420d8c] [00420d90, 00420e67] [00420e6b, 00420e85] [00420e89, 00420ea7]]


undefined1 * FUN_00420bb0(undefined1 *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  HGLOBAL hMem;
  undefined4 ****_Src;
  LPVOID _Dst;
  char *pcVar6;
  char local_a8 [32];
  undefined4 ***local_88 [4];
  int local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b47d0c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  local_34 = 1;
  if (0 < (param_2[1] - *param_2) / 0x1c) {
    *param_1 = 0;
    FUN_00409350("Invalid arguments",0x11);
    ExceptionList = local_10;
    return param_1;
  }
  param_2 = (int *)0x0;
  local_74 = 0xf;
  local_78 = 0;
  local_88[0] = (undefined4 ***)((uint)local_88[0] & 0xffffff00);
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  piVar2 = *(int **)(*(int *)(DAT_012588e8 + 0xb24) + 0x1600);
  if (piVar2 != (int *)0x0) {
    do {
      local_14 = (int *)piVar2[2];
      piVar2 = (int *)*piVar2;
      iVar3 = (**(code **)(*piVar2 + 4))();
      if (iVar3 == 3) {
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        FUN_00409350(&DAT_00ded950,1);
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        local_8._0_1_ = 3;
        pcVar4 = __itoa(piVar2[0x14],local_a8,10);
        pcVar6 = pcVar4;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar4,(int)pcVar6 - (int)(pcVar4 + 1));
        local_8._0_1_ = 4;
        uVar5 = FUN_00988f20(local_50);
        local_8._0_1_ = 5;
        FUN_00448aa0(uVar5,0,0xffffffff);
        if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_6c);
        }
        local_58 = 0xf;
        local_5c = 0;
        local_6c = local_6c & 0xffffff00;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_30[0]);
        }
        local_8._0_1_ = 1;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
        param_2 = (int *)((int)param_2 + 1);
      }
      piVar2 = local_14;
    } while (local_14 != (int *)0x0);
    if (0 < (int)param_2) {
      local_14 = (int *)(local_78 + 1);
      hMem = GlobalAlloc(2,(SIZE_T)local_14);
      _Src = (undefined4 ****)local_88[0];
      if (local_74 < 0x10) {
        _Src = local_88;
      }
      piVar2 = local_14;
      _Dst = GlobalLock(hMem);
      FID_conflict__memcpy(_Dst,_Src,(size_t)piVar2);
      GlobalUnlock(hMem);
      OpenClipboard((HWND)0x0);
      EmptyClipboard();
      SetClipboardData(1,hMem);
      CloseClipboard();
      *param_1 = 1;
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350(" provinces copied to clipboard.",0x1f);
      local_8._0_1_ = 6;
      FUN_009888f0(local_30);
      local_8._0_1_ = 7;
      uVar5 = FUN_00988f20(local_50);
      local_8._0_1_ = 8;
      FUN_00408ed0(uVar5,0,0xffffffff);
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_6c);
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c = local_6c & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      goto LAB_00420c7a;
    }
  }
  *param_1 = 1;
  FUN_00409350("Select some provinces first.",0x1c);
LAB_00420c7a:
  if (local_74 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_88[0]);
}

