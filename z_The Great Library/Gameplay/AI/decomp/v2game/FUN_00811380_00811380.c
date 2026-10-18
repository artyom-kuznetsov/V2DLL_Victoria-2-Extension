// FUN_00811380 @ 00811380 body=[[00811380, 00811448] [0081144f, 0081148b]]


void FUN_00811380(int param_1)

{
  void *pvVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint local_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3eb72;
  pvStack_10 = ExceptionList;
  local_8 = 5;
  local_14 = local_14 & 0xffffff00;
  ExceptionList = &pvStack_10;
  FUN_00815ea0(*(undefined4 *)(param_1 + 0x44),local_14);
  pvVar1 = *(void **)(param_1 + 0x40);
  if (pvVar1 != *(void **)(param_1 + 0x44)) {
    FID_conflict__memcpy(pvVar1,*(void **)(param_1 + 0x44),0);
    *(void **)(param_1 + 0x44) = pvVar1;
  }
  FUN_00815c00();
  puVar4 = *(undefined4 **)(param_1 + 0x50);
  if (puVar4 != *(undefined4 **)(param_1 + 0x54)) {
    do {
      piVar2 = (int *)*puVar4;
      if (piVar2 != (int *)0x0) {
        piVar3 = (int *)*piVar2;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        piVar3 = (int *)piVar2[1];
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        piVar3 = (int *)piVar2[2];
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        piVar2[2] = 0;
        *piVar2 = 0;
        piVar2[1] = 0;
        piVar2[3] = 0;
        piVar2[4] = 0;
        piVar2[7] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(piVar2);
      }
      puVar4 = puVar4 + 1;
    } while (puVar4 != *(undefined4 **)(param_1 + 0x54));
  }
  pvVar1 = *(void **)(param_1 + 0x50);
  if (pvVar1 != *(void **)(param_1 + 0x54)) {
    FID_conflict__memcpy(pvVar1,*(void **)(param_1 + 0x54),0);
    *(void **)(param_1 + 0x54) = pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(param_1 + 0x78));
}

