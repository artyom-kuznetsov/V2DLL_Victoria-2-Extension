// FUN_007ecc30 @ 007ecc30 body=[[007ecc30, 007ecc72] [007ecc76, 007ecd86] [007ecd8a, 007ece08]]


void FUN_007ecc30(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4303a;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *param_1 = CProvinceManager::vftable;
  local_8 = 0x13;
  iVar5 = param_1[0x56a];
  if (iVar5 != 0) {
    FUN_00494c10();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar5);
  }
  FUN_004be200();
  FUN_009bcda0();
  FUN_009bcda0();
  FUN_007ed470();
  iVar5 = 0;
  if (0 < (int)(param_1[99] * param_1[100])) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + 0x39c + param_1[0x67]) != 0) {
        piVar1 = *(int **)(iVar4 + 0x39c + param_1[0x67]);
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x3c0;
    } while (iVar5 < (int)(param_1[99] * param_1[100]));
  }
  if (param_1[0x4a] != 0) {
    FUN_00aaea59(param_1[0x4a]);
  }
  if (param_1[0x51] != param_1[0x52]) {
    iVar5 = 0;
    if (0 < (int)param_1[0x4c]) {
      do {
        piVar1 = *(int **)(param_1[0x51] + iVar5 * 4);
        if (piVar1 != (int *)0x0) {
          piVar2 = (int *)*piVar1;
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          piVar2 = (int *)piVar1[1];
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          piVar2 = (int *)piVar1[2];
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
          }
          piVar1[2] = 0;
          *piVar1 = 0;
          piVar1[1] = 0;
          piVar1[3] = 0;
          piVar1[4] = 0;
          piVar1[7] = 0;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(piVar1);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_1[0x4c]);
    }
    pvVar3 = (void *)param_1[0x51];
    if (pvVar3 != (void *)param_1[0x52]) {
      FID_conflict__memcpy(pvVar3,(void *)param_1[0x52],0);
      param_1[0x52] = pvVar3;
    }
  }
  pvVar3 = (void *)param_1[0x67];
  if (pvVar3 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar3,0x3c0,*(int *)((int)pvVar3 + -4),FUN_007ebf50);
    FUN_00aaea59((int)pvVar3 + -4);
  }
  if ((undefined4 *)param_1[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[6])(1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[0x565]);
}

