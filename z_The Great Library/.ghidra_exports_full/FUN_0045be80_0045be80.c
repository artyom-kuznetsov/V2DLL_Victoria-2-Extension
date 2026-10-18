// FUN_0045be80 @ 0045be80 body=[[0045be80, 0045bfab] [0045bfaf, 0045bfe0] [0045bfe4, 0045c017]]


void FUN_0045be80(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int local_14c [65];
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  iVar2 = param_1;
  puStack_c = &LAB_00b4e110;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while( true ) {
    local_8 = 0xffffffff;
    piVar5 = *(int **)(iVar2 + 0x1c);
    if ((char)piVar5[0x44] == '\0') {
      iVar3 = (**(code **)(*piVar5 + 4))();
      piVar5[2] = iVar3;
      if (iVar3 == 0) {
        piVar5[3] = 0x13;
      }
      *(undefined1 *)(piVar5 + 0x44) = 1;
    }
    piVar5 = piVar5 + 3;
    piVar7 = local_14c;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar7 = piVar7 + 1;
    }
    if ((local_14c[0] == 4) || (local_14c[0] == 0x13)) {
      (**(code **)(**(int **)(iVar2 + 0x1c) + 4))();
      ExceptionList = local_10;
      return;
    }
    (**(code **)(**(int **)(iVar2 + 0x1c) + 4))();
    puVar6 = (undefined4 *)(*(int *)(iVar2 + 0x1c) + 0xc);
    puVar8 = (undefined4 *)(iVar2 + 0x228);
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_8 = 1;
    pcVar4 = (char *)(iVar2 + 0x22c);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(iVar2 + 0x22c),(int)pcVar4 - (iVar2 + 0x22d));
    param_1 = CONCAT31(param_1._1_3_,10);
    iVar3 = FUN_005484e0(local_48,&param_1,1);
    if (iVar3 == -1) {
      FUN_00408ed0(local_48,0,0xffffffff);
    }
    else {
      FUN_009a1140();
      FUN_00409350("Unreadable String",0x11);
    }
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_34) break;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00a840b0();
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c = local_2c & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_48[0]);
}

