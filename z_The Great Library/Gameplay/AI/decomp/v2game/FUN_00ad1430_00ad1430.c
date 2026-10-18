// FUN_00ad1430 @ 00ad1430 body=[[00ad1430, 00ad1596]]


void FUN_00ad1430(float param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  byte bVar3;
  void *_Dst;
  
  iVar2 = *(int *)(in_ECX + 0x1b4);
  bVar3 = (byte)param_2;
  if ((iVar2 == 0) || (*(int *)(iVar2 + 4) == 0)) {
    if (*(int **)(in_ECX + 0x1b8) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x1b8) + 0x20))(param_1,param_2);
    }
    if (bVar3 == 0) {
      return;
    }
    FUN_00ace9e0();
    FUN_00ad0330();
    FUN_00ace4b0();
    FUN_00acf790(param_1);
    iVar2 = *(int *)(in_ECX + 0x24);
    _Dst = *(void **)(in_ECX + 0x20);
  }
  else {
    cVar1 = *(char *)(iVar2 + 0x1c);
    if (*(int **)(in_ECX + 0x1b8) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x1b8) + 0x20))(param_1,(cVar1 != '\0') - 1U & bVar3);
    }
    if (bVar3 == 0) {
      return;
    }
    if (cVar1 == '\0') {
      FUN_00ace9e0();
      FUN_00ad0330();
    }
    if (*(int *)(in_ECX + 0x1b0) != 0) {
      FUN_00adf9d0();
    }
    if (cVar1 != '\0') goto LAB_00ad153f;
    if (*(int *)(in_ECX + 0x1b4) != 0) {
      FUN_00ace440();
    }
    FUN_00acf790(param_1);
    iVar2 = *(int *)(in_ECX + 0x24);
    _Dst = *(void **)(in_ECX + 0x20);
  }
  _memset(_Dst,0,iVar2 * 4);
LAB_00ad153f:
  FUN_00ace560();
  if ((((*(byte *)(in_ECX + 0x1ed) & 1) != 0) && (*(int *)(in_ECX + 0x1e8) == 0)) &&
     (param_1 = param_1 + *(float *)(in_ECX + 0x1c4), *(float *)(in_ECX + 0x1c4) = param_1,
     *(float *)(in_ECX + 0x1c0) <= param_1)) {
    FUN_00acfb60(in_ECX + 0xf0,*(undefined4 *)(in_ECX + 0x1dc));
    *(undefined4 *)(in_ECX + 0x1c4) = 0;
  }
  return;
}

