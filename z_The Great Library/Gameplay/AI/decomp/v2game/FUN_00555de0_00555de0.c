// FUN_00555de0 @ 00555de0 body=[[00555de0, 00555e0a] [00555e10, 00555e39] [00555e40, 00555f43]]


void FUN_00555de0(int param_1,undefined1 param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = in_ECX - param_1 >> 2;
  iVar5 = local_10 - (in_ECX - param_1 >> 0x1f) >> 1;
  if (0 < iVar5) {
    local_18 = iVar5 * 2 + 2;
    do {
      local_28 = *(undefined4 *)(param_1 + -4 + iVar5 * 4);
      local_20 = iVar5 + -1;
      iVar5 = local_18 + -2;
      local_24 = CONCAT31(local_24._1_3_,param_2);
      bVar7 = iVar5 == local_10;
      local_18 = iVar5;
      local_8 = local_20;
      if (iVar5 < local_10) {
        do {
          piVar1 = *(int **)(param_1 + iVar5 * 4);
          local_1c = *(int **)(param_1 + -4 + iVar5 * 4);
          cVar3 = (**(code **)(*piVar1 + 0x38))();
          if (cVar3 == '\0') {
            piVar1 = (int *)piVar1[0xe];
            local_c = 0;
            while (iVar6 = local_c, piVar1 != (int *)0x0) {
              piVar2 = (int *)*piVar1;
              piVar1 = (int *)piVar1[2];
              cVar3 = (**(code **)(*piVar2 + 0x28))();
              if ((cVar3 != '\0') && (*(char *)(piVar2[0xe] + 0x3c) == '\0')) {
                local_c = local_c + 1;
              }
            }
          }
          else {
            iVar6 = piVar1[0x10];
          }
          local_14 = iVar6;
          piVar1 = local_1c;
          cVar3 = (**(code **)(*local_1c + 0x38))();
          if (cVar3 == '\0') {
            piVar1 = (int *)piVar1[0xe];
            local_c = 0;
            iVar6 = local_c;
            while (local_c = iVar6, piVar1 != (int *)0x0) {
              piVar2 = (int *)*piVar1;
              piVar1 = (int *)piVar1[2];
              cVar3 = (**(code **)(*piVar2 + 0x28))();
              iVar6 = local_c;
              if ((cVar3 != '\0') && (*(char *)(piVar2[0xe] + 0x3c) == '\0')) {
                iVar6 = local_c + 1;
              }
            }
          }
          else {
            iVar6 = piVar1[0x10];
          }
          iVar4 = iVar5;
          if (iVar6 < local_14) {
            iVar4 = iVar5 + -1;
          }
          iVar5 = iVar4 * 2 + 2;
          *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + iVar4 * 4);
          local_8 = iVar4;
        } while (iVar5 < local_10);
        bVar7 = iVar5 == local_10;
      }
      iVar5 = local_20;
      if (bVar7) {
        *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + -4 + local_10 * 4);
        local_8 = local_10 + -1;
      }
      FUN_00559640(param_1,local_8,local_20,&local_28,local_24);
    } while (0 < iVar5);
  }
  return;
}

