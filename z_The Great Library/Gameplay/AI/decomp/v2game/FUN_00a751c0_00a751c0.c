// FUN_00a751c0 @ 00a751c0 body=[[00a751c0, 00a752a3] [00a752a7, 00a753ea] [00a753ee, 00a75443]]


void FUN_00a751c0(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint in_ECX;
  int iVar3;
  undefined4 unaff_EDI;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_1d0 [4];
  uint auStack_1cc [3];
  undefined4 local_1c0;
  undefined4 local_1bc;
  uint uStack_1b8;
  undefined **appuStack_138 [48];
  undefined **appuStack_78 [19];
  void *pvStack_2c;
  uint uStack_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b56d2c;
  pvStack_14 = ExceptionList;
  local_1bc = 0xf;
  local_1c0 = 0;
  local_1d0[0] = 0;
  ExceptionList = &pvStack_14;
  FUN_00409350("tcp.cpp",7);
  local_c = 0;
  uVar1 = FUN_004015b0(local_1d0,0x173,0x301);
  uVar7 = 0;
  local_c = CONCAT31(local_c._1_3_,1);
  FUN_00987d50(uVar1,"TCP: Atempting to close socket id ",0x22);
  uVar1 = FUN_00455470(uVar1,param_1);
  FUN_00401280(uVar1);
  uStack_24 = uStack_24 & 0xffffff00;
  FUN_00987ac0(appuStack_138);
  appuStack_138[0] = std::ios_base::vftable;
  FUN_00aad52d(appuStack_138);
  uStack_24 = 0xffffffff;
  if (0xf < in_ECX) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_EDI);
  }
  iVar3 = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10);
  iVar5 = iVar3 >> 0x1f;
  uVar6 = 0;
  if (iVar3 / 0x24 + iVar5 != iVar5) {
    iVar5 = 0;
    do {
      piVar2 = (int *)(iVar5 + *(int *)(in_ECX + 0x10));
      if ((*piVar2 != -1) && (piVar2[8] == param_1)) {
        uStack_1b8 = 0xf;
        local_1bc = 0;
        auStack_1cc[0] = auStack_1cc[0] & 0xffffff00;
        FUN_00409350("tcp.cpp",7);
        uStack_24 = 2;
        uVar1 = FUN_004015b0(auStack_1cc,0x178,0x301);
        uStack_24 = CONCAT31(uStack_24._1_3_,3);
        FUN_00987d50(uVar1,"TCP: Succeded in closing socket ",0x20,0);
        piVar2 = (int *)FUN_00455470(uVar1,param_1);
        FUN_00408be0(piVar2);
        uVar4 = 0;
        in_ECX = uVar7;
        if ((*(byte *)(*(int *)(*piVar2 + 4) + 0xc + (int)piVar2) & 6) == 0) {
          iVar3 = (**(code **)(**(int **)(*(int *)(*piVar2 + 4) + 0x38 + (int)piVar2) + 0x34))();
          in_ECX = uVar7;
          if (iVar3 == -1) {
            uVar4 = 4;
          }
        }
        if (uVar4 != 0) {
          uVar4 = *(uint *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0xc) | uVar4;
          if (*(int *)((int)piVar2 + *(int *)(*piVar2 + 4) + 0x38) == 0) {
            uVar4 = uVar4 | 4;
          }
          FUN_00401120(uVar4,0);
        }
        uStack_24 = CONCAT31(uStack_24._1_3_,2);
        FUN_00987ac0(appuStack_78);
        appuStack_78[0] = std::ios_base::vftable;
        FUN_00aad52d(appuStack_78);
        uStack_24 = 0xffffffff;
        if (0xf < uStack_1b8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(auStack_1cc[0]);
        }
        FUN_00a76860(in_ECX);
        uVar7 = in_ECX;
      }
      iVar5 = iVar5 + 0x24;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)((*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10)) / 0x24));
  }
  ExceptionList = pvStack_2c;
  return;
}

