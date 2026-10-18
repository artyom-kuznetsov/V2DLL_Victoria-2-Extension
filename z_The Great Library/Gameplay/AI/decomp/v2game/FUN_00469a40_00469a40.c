// FUN_00469a40 @ 00469a40 body=[[00469a40, 00469d05]]


int FUN_00469a40(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int local_8;
  
  iVar2 = FUN_00467240();
  local_8 = param_1 + 8;
  iVar5 = param_1 + 0x48;
  if (*(char *)(param_1 + 0x88) == '\0') {
    iVar5 = local_8;
    local_8 = param_1 + 0x48;
  }
  iVar4 = iVar2 + 0x24;
  FUN_00465e90();
  FUN_00465e90(iVar4,4,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x128),
               *(undefined4 *)(*(int *)(param_1 + 0x8c) + 300));
  FUN_00465e90(iVar4,3,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc),0x2d2d2d,0);
  FUN_00465e90();
  FUN_00465e90(iVar4,1,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54));
  FUN_00465e90(iVar4,0,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0x2d2d2d,0);
  FUN_00466050();
  FUN_00466050();
  FUN_00592ad0();
  FUN_00466050();
  FUN_00466050();
  FUN_00592ad0();
  FUN_00466050();
  FUN_00466050();
  (**(code **)(**(int **)(param_1 + 0x8c) + 0x1c))();
  FUN_00464b30(iVar2,0,3);
  FUN_00408ed0(iVar5 + 0x10,0,0xffffffff);
  FUN_00464b30(iVar2,0,2);
  FUN_00408ed0(local_8 + 0x10,0,0xffffffff);
  FUN_00464b30(iVar2,0,1);
  pcVar6 = "naval";
  if (param_2 != 2) {
    pcVar6 = "land";
  }
  pcVar3 = pcVar6;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00409350(pcVar6,(int)pcVar3 - (int)(pcVar6 + 1));
  FUN_00464b30(iVar2,0,0);
  FUN_00464bd0();
  return iVar2;
}

