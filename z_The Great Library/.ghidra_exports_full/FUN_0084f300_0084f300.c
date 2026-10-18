// FUN_0084f300 @ 0084f300 body=[[0084f300, 0084f391]]


void FUN_0084f300(int param_1,float param_2)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  float10 fVar3;
  
  fVar3 = (float10)(**(code **)(*in_ECX + 0x168))();
  piVar2 = *(int **)(param_1 + 0x78);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_00aae9af(0x10);
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2[1] = 1;
      piVar2[2] = param_1;
      piVar2[3] = 0;
      *piVar2 = (int)CAIManPowerRequest::vftable;
    }
    *(int **)(param_1 + 0x78) = piVar2;
    FUN_0084f170(in_ECX,1,piVar2,(float10)param_2 <= fVar3);
  }
  iVar1 = *piVar2;
  fVar3 = (float10)(**(code **)(iVar1 + 0xc))();
  (**(code **)(iVar1 + 0x1c))((float)(fVar3 + (float10)param_2));
  return;
}

