// FUN_00a7c580 @ 00a7c580 body=[[00a7c580, 00a7c764]]


int FUN_00a7c580(char *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  void *pvVar4;
  
  piVar1 = (int *)(in_EAX + 0x40);
  FUN_00a7d600();
  _strncpy((char *)(*piVar1 + -0x1c + ((*(int *)(in_EAX + 0x44) - *piVar1) / 0x1c) * 0x1c),param_1,
           0x10);
  *(int *)(*piVar1 + -8 + ((*(int *)(in_EAX + 0x44) - *piVar1) / 0x1c) * 0x1c) = param_2;
  iVar2 = *piVar1;
  iVar3 = *(int *)(in_EAX + 0x44);
  if (param_2 < 2) {
    if (param_2 == 1) {
      *(undefined4 *)(iVar2 + -0xc + ((iVar3 - iVar2) / 0x1c) * 0x1c) = 0;
      *(undefined4 *)(*piVar1 + -4 + ((*(int *)(in_EAX + 0x44) - *piVar1) / 0x1c) * 0x1c) = *param_3
      ;
    }
    else {
      *(undefined4 *)(iVar2 + -0xc + ((iVar3 - iVar2) / 0x1c) * 0x1c) = 0;
      *(undefined4 *)(*piVar1 + -4 + ((*(int *)(in_EAX + 0x44) - *piVar1) / 0x1c) * 0x1c) = 0;
    }
  }
  else {
    *(undefined4 *)(iVar2 + -0xc + ((iVar3 - iVar2) / 0x1c) * 0x1c) = 1;
    iVar2 = *piVar1;
    pvVar4 = _malloc(param_2 * 4);
    *(void **)(iVar2 + -4 + ((*(int *)(in_EAX + 0x44) - iVar2) / 0x1c) * 0x1c) = pvVar4;
    FID_conflict__memcpy
              (*(void **)(*piVar1 + -4 + ((*(int *)(in_EAX + 0x44) - *piVar1) / 0x1c) * 0x1c),
               param_3,param_2 * 4);
  }
  return *piVar1 + -0x1c + ((*(int *)(in_EAX + 0x44) - *piVar1) / 0x1c) * 0x1c;
}

