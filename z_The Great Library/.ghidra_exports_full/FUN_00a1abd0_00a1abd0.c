// FUN_00a1abd0 @ 00a1abd0 body=[[00a1abd0, 00a1ac71]]


int FUN_00a1abd0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_5;
  puVar1 = (undefined4 *)(param_5 + 0x28);
  puVar2 = (undefined4 *)(param_5 + 0x20);
  param_5 = 0;
  iVar4 = (*(code *)*puVar2)(*puVar1,0x13,4);
  if (iVar4 == 0) {
    return -4;
  }
  iVar5 = FUN_00a1a7f0(param_1,0x13,0x13,0,0,param_3,param_2,param_4,&param_5,iVar4);
  if (iVar5 == -3) {
    *(char **)(iVar3 + 0x18) = "oversubscribed dynamic bit lengths tree";
    (**(code **)(iVar3 + 0x24))(*(undefined4 *)(iVar3 + 0x28),iVar4);
    return -3;
  }
  if ((iVar5 == -5) || (*param_2 == 0)) {
    *(char **)(iVar3 + 0x18) = "incomplete dynamic bit lengths tree";
    iVar5 = -3;
  }
  (**(code **)(iVar3 + 0x24))(*(undefined4 *)(iVar3 + 0x28),iVar4);
  return iVar5;
}

