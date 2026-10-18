// FUN_00a43d80 @ 00a43d80 body=[[00a43d80, 00a43e25] [00a43e29, 00a43e4c] [00a43e50, 00a43e8e] [00a43e92, 00a43eaf] [00a43eb3, 00a43ed3]]


void FUN_00a43d80(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b4110e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e40ed0;
  param_1[0x23] = &PTR_LAB_00e40f50;
  local_8 = 2;
  FUN_004be200();
  piVar4 = param_1 + 0x70;
  iVar3 = 0x19;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = (int *)param_1[0x89];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  puVar5 = (undefined4 *)param_1[0x6c];
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)param_1[0x6d];
    while( true ) {
      if (puVar5 == puVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(param_1[0x6c]);
      }
      if (0xf < (uint)puVar5[5]) break;
      puVar5[5] = 0xf;
      puVar5[4] = 0;
      *(undefined1 *)puVar5 = 0;
      puVar5 = puVar5 + 7;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*puVar5);
  }
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  local_8 = local_8 & 0xffffff00;
  _eh_vector_destructor_iterator_(param_1 + 0x26,0x1c,10,FUN_00408ad0);
  if (0xf < (uint)param_1[0xf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[10]);
  }
  param_1[0xf] = 0xf;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  if ((uint)param_1[7] < 0x10) {
    param_1[6] = 0;
    param_1[7] = 0xf;
    *(undefined1 *)(param_1 + 2) = 0;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[2]);
}

