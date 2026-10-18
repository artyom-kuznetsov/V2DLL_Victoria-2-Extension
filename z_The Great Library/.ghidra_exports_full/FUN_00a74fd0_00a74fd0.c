// FUN_00a74fd0 @ 00a74fd0 body=[[00a74fd0, 00a7513b] [00a7513f, 00a7516d] [00a75180, 00a751bf]]


uint FUN_00a74fd0(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int local_fc;
  uint local_f8;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  undefined **appuStack_60 [19];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b546a6;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  closesocket(*(SOCKET *)(in_ECX + 0xc));
  iVar3 = *(int *)(in_ECX + 0x10);
  iVar4 = *(int *)(in_ECX + 0x14) - iVar3;
  uVar5 = iVar4 * 0x38e38e39;
  local_f8 = 0;
  if (iVar4 / 0x24 + (iVar4 >> 0x1f) != iVar4 >> 0x1f) {
    local_fc = 0;
    do {
      if (*(int *)(local_fc + iVar3) != -1) {
        local_e0 = 0xf;
        local_e4 = 0;
        local_f4[0] = local_f4[0] & 0xffffff00;
        FUN_00409350("tcp.cpp",7);
        local_c = 0;
        uVar1 = FUN_004015b0(local_f4,0x165,0x301);
        local_c = CONCAT31(local_c._1_3_,1);
        FUN_00987d50(uVar1,"TCP: Closing socket",0x13,0);
        piVar2 = (int *)FUN_00455470(uVar1,local_f8);
        FUN_00408be0(piVar2);
        uVar5 = 0;
        if ((*(byte *)(*(int *)(*piVar2 + 4) + 0xc + (int)piVar2) & 6) == 0) {
          iVar3 = (**(code **)(**(int **)(*(int *)(*piVar2 + 4) + 0x38 + (int)piVar2) + 0x34))();
          if (iVar3 == -1) {
            uVar5 = 4;
          }
        }
        if (uVar5 != 0) {
          uVar5 = *(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0xc) | uVar5;
          if (*(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x38) == 0) {
            uVar5 = uVar5 | 4;
          }
          FUN_00401120(uVar5,0);
        }
        local_c = local_c & 0xffffff00;
        FUN_00987ac0(appuStack_60);
        appuStack_60[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_60);
        local_c = 0xffffffff;
        if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_f4[0]);
        }
        closesocket(*(SOCKET *)(*(int *)(in_ECX + 0x10) + local_fc));
      }
      iVar3 = *(int *)(*(int *)(in_ECX + 0x10) + 0x14 + local_fc);
      if (iVar3 != 0) {
        FUN_009d6f00();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar3);
      }
      iVar3 = *(int *)(in_ECX + 0x10);
      local_fc = local_fc + 0x24;
      uVar5 = (*(int *)(in_ECX + 0x14) - iVar3) / 0x24;
      local_f8 = local_f8 + 1;
    } while (local_f8 < uVar5);
  }
  ExceptionList = local_14;
  return uVar5;
}

