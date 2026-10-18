// FUN_0084f260 @ 0084f260 body=[[0084f260, 0084f2f6]]


void FUN_0084f260(int param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 local_8;
  
  fVar3 = (float10)(**(code **)(*in_ECX + 0x15c))();
  if (((float10)param_2 <= fVar3) || (local_8 = 0, in_ECX[0x51] != 0)) {
    local_8 = 1;
  }
  piVar2 = *(int **)(param_1 + 0x74);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_00aae9af(0x10);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2[1] = 0;
      piVar2[2] = param_1;
      piVar2[3] = 0;
      *piVar2 = (int)CAIMoneyRequest::vftable;
    }
    *(int **)(param_1 + 0x74) = piVar2;
    FUN_0084f170(in_ECX,0,piVar2,local_8);
  }
  iVar1 = *piVar2;
  fVar3 = (float10)(**(code **)(iVar1 + 0xc))();
  (**(code **)(iVar1 + 0x1c))((float)(fVar3 + (float10)param_2));
  return;
}

