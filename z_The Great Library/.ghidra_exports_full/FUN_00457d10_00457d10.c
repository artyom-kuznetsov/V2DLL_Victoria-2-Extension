// FUN_00457d10 @ 00457d10 body=[[00457d10, 00457d4e] [00457d50, 00457dc9] [00457dcd, 00457e4d]]


/* WARNING: Removing unreachable block (ram,0x00457d7d) */

void FUN_00457d10(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 local_c4 [40];
  undefined4 local_9c;
  undefined1 local_7c [36];
  undefined1 *local_58;
  int local_54;
  undefined4 local_30;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  if (0 < (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) & 0xfffffffcU)) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + local_14 * 4);
      iVar4 = FUN_0045e4e0(iVar1);
      uVar5 = *(uint *)(param_2 + 0x10);
      uVar2 = *(uint *)(iVar4 + 0x10);
      uVar6 = uVar2;
      if (uVar5 <= uVar2) {
        uVar6 = uVar5;
      }
      iVar4 = FUN_00414bd0(uVar6);
      bVar7 = false;
      if (iVar4 == 0) {
        if (uVar2 < uVar5) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar2 != uVar5);
        }
        bVar7 = uVar5 == 0;
      }
      local_8 = 0xffffffff;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30);
      }
      if (bVar7) {
        FUN_008a8650(0);
        FUN_008a8650(0);
        local_58 = local_c4;
        local_9c = param_4;
        local_54 = iVar1;
        cVar3 = (**(code **)(*param_3 + 0x18))(local_7c);
        if (cVar3 != '\0') {
          *(undefined4 *)(iVar1 + 0x80) = 0;
          *(undefined1 *)(iVar1 + 0x84) = 1;
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2);
  }
  ExceptionList = local_10;
  return;
}

