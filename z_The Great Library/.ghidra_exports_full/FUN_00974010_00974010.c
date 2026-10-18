// FUN_00974010 @ 00974010 body=[[00974010, 009740a5]]


void FUN_00974010(undefined4 param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  
  if (param_2 == 0x58) {
    piVar1 = (int *)FUN_00aae9af(0x20);
    piVar2 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      *(undefined1 *)(piVar1 + 5) = 0;
      *(undefined2 *)(piVar1 + 7) = 0;
      piVar1[1] = 0x18d;
      *piVar1 = (int)CEffect::vftable;
      piVar2 = piVar1;
    }
    *(int **)(in_ECX + 0xc) = piVar2;
    (**(code **)(*piVar2 + 0xc))(param_1);
  }
  else if (param_2 == 0x3b6) {
    piVar1 = (int *)FUN_00aae9af(0x1c);
    piVar2 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      piVar1[1] = 0x18d;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      *(undefined2 *)(piVar1 + 6) = 0;
      *piVar1 = (int)CAndTrigger::vftable;
      piVar2 = piVar1;
    }
    *(int **)(in_ECX + 8) = piVar2;
    (**(code **)(*piVar2 + 0xc))(param_1);
    return;
  }
  return;
}

