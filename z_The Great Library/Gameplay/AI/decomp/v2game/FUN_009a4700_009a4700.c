// FUN_009a4700 @ 009a4700 body=[[009a4700, 009a473d]]


int FUN_009a4700(int param_1)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *in_EAX;
  int *piVar4;
  
  piVar4 = (int *)*in_EAX;
  puVar1 = (uint *)in_EAX[1];
  while( true ) {
    if ((piVar4 < (int *)*puVar1) || ((int *)puVar1[1] <= piVar4)) {
      return 0;
    }
    cVar3 = (**(code **)(*(int *)*piVar4 + 0x58))();
    if ((cVar3 != '\0') &&
       ((iVar2 = *piVar4, iVar2 != param_1 && (*(char *)(iVar2 + 0x4f) != '\0')))) break;
    piVar4 = piVar4 + -1;
  }
  return iVar2;
}

