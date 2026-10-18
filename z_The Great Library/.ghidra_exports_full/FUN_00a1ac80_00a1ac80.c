// FUN_00a1ac80 @ 00a1ac80 body=[[00a1ac80, 00a1ae00]]


int FUN_00a1ac80(uint param_1,undefined4 param_2,int param_3,int *param_4,int *param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_9;
  puVar1 = (undefined4 *)(param_9 + 0x28);
  puVar2 = (undefined4 *)(param_9 + 0x20);
  param_9 = 0;
  iVar4 = (*(code *)*puVar2)(*puVar1,0x120,4);
  if (iVar4 == 0) {
    return -4;
  }
  iVar5 = FUN_00a1a7f0(param_3,param_1,0x101,&DAT_00def5f0,&DAT_00def670,param_6,param_4,param_8,
                       &param_9,iVar4);
  if (iVar5 == 0) {
    if (*param_4 != 0) {
      iVar5 = FUN_00a1a7f0(param_3 + param_1 * 4,param_2,0,&DAT_00def6f0,&DAT_00def768,param_7,
                           param_5,param_8,&param_9,iVar4);
      if (iVar5 == 0) {
        if ((*param_5 != 0) || (param_1 < 0x102)) {
          (**(code **)(iVar3 + 0x24))(*(undefined4 *)(iVar3 + 0x28),iVar4);
          return 0;
        }
      }
      else {
        if (iVar5 == -3) {
          *(char **)(iVar3 + 0x18) = "oversubscribed distance tree";
          (**(code **)(iVar3 + 0x24))(*(undefined4 *)(iVar3 + 0x28),iVar4);
          return -3;
        }
        if (iVar5 == -5) {
          *(char **)(iVar3 + 0x18) = "incomplete distance tree";
          (**(code **)(iVar3 + 0x24))(*(undefined4 *)(iVar3 + 0x28),iVar4);
          return -3;
        }
        if (iVar5 == -4) goto LAB_00a1ada8;
      }
      *(char **)(iVar3 + 0x18) = "empty distance tree with lengths";
      iVar5 = -3;
LAB_00a1ada8:
      (**(code **)(iVar3 + 0x24))(*(undefined4 *)(iVar3 + 0x28),iVar4);
      return iVar5;
    }
  }
  else {
    if (iVar5 == -3) {
      *(char **)(iVar3 + 0x18) = "oversubscribed literal/length tree";
      (**(code **)(iVar3 + 0x24))(*(undefined4 *)(iVar3 + 0x28),iVar4);
      return -3;
    }
    if (iVar5 == -4) goto LAB_00a1aded;
  }
  *(char **)(iVar3 + 0x18) = "incomplete literal/length tree";
  iVar5 = -3;
LAB_00a1aded:
  (**(code **)(iVar3 + 0x24))(*(undefined4 *)(iVar3 + 0x28),iVar4);
  return iVar5;
}

