// FUN_004c7310 @ 004c7310 body=[[004c7310, 004c7548]]


void FUN_004c7310(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5856b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(char *)(*(int *)(param_2[0x37] + 0x5c) + 0x2a) == '\0') ||
     (ExceptionList = &local_10, cVar2 = (**(code **)(*param_2 + 0x3c))(), cVar2 == '\0')) {
    cVar2 = (**(code **)(*param_2 + 0x40))();
    if (cVar2 == '\0') {
      if (param_2[0x1d] == 0) {
        if ((param_2[0x3b] < 1) || (cVar2 = (**(code **)(*param_2 + 0x3c))(), cVar2 != '\0')) {
          param_1 = 0;
          puVar3 = (undefined4 *)FUN_004c8d10();
          *puVar3 = 0;
        }
        else {
          param_1 = 1;
          puVar3 = (undefined4 *)FUN_004c8d10();
          *puVar3 = 1;
        }
      }
      else {
        cVar2 = FUN_005cf260();
        if (cVar2 == '\0') {
          param_1 = 3;
          puVar3 = (undefined4 *)FUN_004c8d10();
          *puVar3 = 3;
        }
        else {
          param_1 = 2;
          puVar3 = (undefined4 *)FUN_004c8d10();
          *puVar3 = 2;
        }
      }
    }
    else {
      param_1 = 4;
      puVar3 = (undefined4 *)FUN_004c8d10();
      *puVar3 = 4;
    }
    piVar6 = (int *)0x0;
    iVar7 = 0;
    piVar4 = (int *)(iVar1 + 0x1e0 + param_1 * 0x38);
    do {
      if (*piVar4 == 0) {
        if (-1 < iVar7) {
          iVar5 = FUN_00aae9af(0x23c);
          local_8 = 0;
          if (iVar5 != 0) {
            piVar6 = (int *)FUN_008166b0(iVar5,0,DAT_00f092fc,0x3f333333);
          }
          local_8 = 0xffffffff;
          (**(code **)(*piVar6 + 0x90))(0x3e860a92);
          (**(code **)(*(int *)(*(int *)(iVar1 + 0x24) + 0x11dc) + 0x10))(piVar6);
          (**(code **)(*piVar6 + 0x48))(2);
          FUN_00816810();
          FUN_00644a70(*(undefined4 *)(iVar1 + 0x24),piVar6,0);
          iVar7 = param_1 * 7 + iVar7;
          *(int **)(iVar1 + 0x1e0 + iVar7 * 8) = param_2;
          *(int **)(iVar1 + 0x1e4 + iVar7 * 8) = piVar6;
          puVar3 = (undefined4 *)FUN_004c8d10();
          *puVar3 = piVar6;
          FUN_004c87b0(param_1);
        }
        break;
      }
      iVar7 = iVar7 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar7 < 7);
    FUN_004c83e0(iVar1);
  }
  ExceptionList = local_10;
  return;
}

