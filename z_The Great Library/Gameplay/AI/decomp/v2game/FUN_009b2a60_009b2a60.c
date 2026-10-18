// FUN_009b2a60 @ 009b2a60 body=[[009b2a60, 009b2ad9]]


void FUN_009b2a60(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = param_1 + 0x1c;
  }
  iVar1 = in_ECX[0x18];
  piVar2 = (int *)FUN_00aae9af(0x10);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = iVar3;
    piVar2[1] = 0;
    piVar2[2] = iVar1;
    *(undefined1 *)(piVar2 + 3) = 0;
  }
  iVar3 = in_ECX[0x1a];
  in_ECX[0x18] = (int)piVar2;
  in_ECX[0x1a] = iVar3 + 1;
  if (iVar3 == 0) {
    in_ECX[0x19] = (int)piVar2;
  }
  else {
    *(int **)(iVar1 + 4) = piVar2;
  }
  (**(code **)(in_ECX[0x1c] + 0x14))(param_1,1);
  if (param_2 != '\0') {
    (**(code **)(*in_ECX + 0x6c))();
  }
  return;
}

