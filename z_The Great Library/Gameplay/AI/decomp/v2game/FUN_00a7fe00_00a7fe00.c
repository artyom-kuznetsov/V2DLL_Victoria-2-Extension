// FUN_00a7fe00 @ 00a7fe00 body=[[00a7fe00, 00a7fe86] [00a7fe90, 00a7ffd7] [00a7ffdb, 00a7fff7]]


/* WARNING: Removing unreachable block (ram,0x00a7ffcf) */

void FUN_00a7fe00(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d5d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*param_2 != param_2[1]) {
    ExceptionList = &local_10;
    iVar2 = FUN_00a40db0(param_2[1],*param_2,param_2);
    FUN_00a40310();
    param_2[1] = iVar2;
  }
  iVar2 = FUN_00a7cca0("locator");
  if ((iVar2 != 0) &&
     (local_1c = (*(int *)(iVar2 + 0x54) - *(int *)(iVar2 + 0x50)) / 0x60, 0 < local_1c)) {
    iVar7 = 0;
    do {
      local_8 = 0;
      pcVar6 = (char *)(*(int *)(iVar2 + 0x50) + iVar7);
      pcVar3 = pcVar6;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar6,(int)pcVar3 - (int)(pcVar6 + 1));
      FUN_00a7cc10(&DAT_00dee320);
      FUN_00a7cc10(&DAT_00dee344);
      iVar4 = FUN_00a7cc10(&DAT_00dee350);
      if ((iVar4 != 0) && (param_1 != 0)) {
        if ((*(int *)(iVar4 + 0x14) == 0) ||
           ((*(int *)(iVar4 + 0x10) != 4 && (*(int *)(iVar4 + 0x10) != 5)))) {
          puVar5 = (undefined4 *)0x0;
        }
        else if (*(int *)(iVar4 + 0x14) == 1) {
          puVar5 = (undefined4 *)(iVar4 + 0x18);
        }
        else {
          puVar5 = *(undefined4 **)(iVar4 + 0x18);
        }
        FUN_00a6f920(*puVar5);
      }
      FUN_00a804f0(param_2);
      iVar7 = iVar7 + 0x60;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  ExceptionList = local_10;
  return;
}

