// FUN_0051c890 @ 0051c890 body=[[0051c890, 0051cc9a]]


void FUN_0051c890(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_28;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b7483c;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_004740a0();
  iVar5 = DAT_01258a48;
  local_28 = 1;
  if (4 < (int)(*(int *)(DAT_01258a48 + 0x2c) - *(int *)(DAT_01258a48 + 0x28) & 0xfffffffcU)) {
    do {
      iVar3 = *(int *)(*(int *)(iVar5 + 0x28) + local_28 * 4);
      piVar4 = *(int **)(param_1 + 0x84c);
      if (*(int *)(iVar3 + 0x5c) == 1) {
        cVar1 = (**(code **)(*piVar4 + 0x20))();
        if (cVar1 == '\0') {
          piVar4 = DAT_01258a40;
          if (DAT_01258a40 == (int *)0x0) {
            iVar2 = FUN_00aae9af(0x1d8);
            local_c = 1;
            if (iVar2 == 0) goto LAB_0051c930;
            DAT_01258a40 = (int *)FUN_009747a0();
            goto LAB_0051c932;
          }
        }
        else {
          piVar4 = *(int **)(piVar4[0x16] + *(int *)(iVar3 + 0x50) * 4);
        }
      }
      else {
        piVar4 = DAT_01258a40;
        if (DAT_01258a40 == (int *)0x0) {
          iVar2 = FUN_00aae9af(0x1d8);
          local_c = 0;
          if (iVar2 == 0) {
LAB_0051c930:
            DAT_01258a40 = (int *)0x0;
          }
          else {
            DAT_01258a40 = (int *)FUN_009747a0();
          }
LAB_0051c932:
          local_c = 0xffffffff;
          piVar4 = DAT_01258a40;
        }
      }
      cVar1 = (**(code **)(*piVar4 + 0x34))();
      if (cVar1 != '\0') {
        piVar4 = *(int **)(param_1 + 0x84c);
        if (*(int *)(iVar3 + 0x5c) == 1) {
          cVar1 = (**(code **)(*piVar4 + 0x20))();
          if (cVar1 == '\0') {
            piVar4 = DAT_01258a40;
            if (DAT_01258a40 == (int *)0x0) {
              iVar3 = FUN_00aae9af(0x1d8);
              local_c = 3;
              if (iVar3 == 0) goto LAB_0051c9e5;
              piVar4 = (int *)FUN_009747a0();
              local_c = 0xffffffff;
              DAT_01258a40 = piVar4;
            }
          }
          else {
            piVar4 = *(int **)(piVar4[0x16] + *(int *)(iVar3 + 0x50) * 4);
          }
        }
        else {
          piVar4 = DAT_01258a40;
          if (DAT_01258a40 == (int *)0x0) {
            iVar3 = FUN_00aae9af(0x1d8);
            local_c = 2;
            if (iVar3 == 0) {
LAB_0051c9e5:
              local_c = 0xffffffff;
              DAT_01258a40 = (int *)0x0;
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = (int *)FUN_009747a0();
              local_c = 0xffffffff;
              DAT_01258a40 = piVar4;
            }
          }
        }
        FUN_00474b20(piVar4 + 0x1d);
      }
      local_28 = local_28 + 1;
    } while (local_28 < *(int *)(iVar5 + 0x2c) - *(int *)(iVar5 + 0x28) >> 2);
  }
  iVar5 = 1;
  if (4 < (int)(*(int *)(param_1 + 0x854) - *(int *)(param_1 + 0x850) & 0xfffffffcU)) {
    do {
      cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x850) + iVar5 * 4) + 0x34))();
      if (cVar1 != '\0') {
        FUN_00474b20(*(int *)(*(int *)(param_1 + 0x850) + iVar5 * 4) + 0x74);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x854) - *(int *)(param_1 + 0x850) >> 2);
  }
  iVar5 = 1;
  if (4 < (int)(*(int *)(param_1 + 0x864) - *(int *)(param_1 + 0x860) & 0xfffffffcU)) {
    do {
      cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x860) + iVar5 * 4) + 0x34))();
      if (cVar1 != '\0') {
        FUN_00474b20(*(int *)(*(int *)(param_1 + 0x860) + iVar5 * 4) + 0x74);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x864) - *(int *)(param_1 + 0x860) >> 2);
  }
  iVar5 = 1;
  if (4 < (int)(*(int *)(param_1 + 0x874) - *(int *)(param_1 + 0x870) & 0xfffffffcU)) {
    do {
      cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x870) + iVar5 * 4) + 0x34))();
      if (cVar1 != '\0') {
        FUN_00474b20(*(int *)(*(int *)(param_1 + 0x870) + iVar5 * 4) + 0x74);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x874) - *(int *)(param_1 + 0x870) >> 2);
  }
  iVar5 = 1;
  if (4 < (int)(*(int *)(param_1 + 0x884) - *(int *)(param_1 + 0x880) & 0xfffffffcU)) {
    do {
      cVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x880) + iVar5 * 4) + 0x34))();
      if (cVar1 != '\0') {
        FUN_00474b20(*(int *)(*(int *)(param_1 + 0x880) + iVar5 * 4) + 0x74);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x884) - *(int *)(param_1 + 0x880) >> 2);
  }
  iVar5 = 0;
  if (0 < *DAT_012587e4) {
    piVar4 = (int *)DAT_012587e4[1];
    do {
      if (((*(int *)(*piVar4 + 0x20) != 0) &&
          ((*(int *)(param_1 + 0xbec) - *(int *)(param_1 + 0xbe8) & 0xfffffffcU) != 0)) &&
         (*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(*piVar4 + 0x20) * 4) + 0xa8) != 0))
      {
        *(undefined1 *)(param_1 + 3000) = 1;
        break;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < *DAT_012587e4);
  }
  if (*(char *)(param_1 + 0xaf8) == '\0') {
    piVar4 = *(int **)(param_1 + 0xe44);
    while (piVar4 != (int *)0x0) {
      iVar5 = *piVar4;
      piVar4 = (int *)piVar4[2];
      iVar5 = *(int *)(iVar5 + 0x60);
      while (iVar5 != 0) {
        *(undefined1 *)(iVar5 + 0x180) = 0;
        iVar5 = *(int *)(iVar5 + 0x224);
      }
    }
  }
  ExceptionList = pvStack_14;
  return;
}

