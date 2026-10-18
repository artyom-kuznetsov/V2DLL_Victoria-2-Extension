// FUN_0084f6b0 @ 0084f6b0 body=[[0084f6b0, 0084f736]]


void FUN_0084f6b0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 in_ECX;
  float10 fVar3;
  
  piVar2 = *(int **)(param_1 + 0x90);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_00aae9af(0x14);
    iVar1 = DAT_00f092fc;
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2[1] = 7;
      piVar2[2] = param_1;
      piVar2[3] = iVar1;
      piVar2[4] = 0;
      *piVar2 = (int)CAIPortRequest::vftable;
    }
    *(int **)(param_1 + 0x90) = piVar2;
    FUN_0084f170(in_ECX,7,piVar2,1);
  }
  iVar1 = *piVar2;
  fVar3 = (float10)(**(code **)(iVar1 + 0xc))();
  (**(code **)(iVar1 + 0x1c))((float)(fVar3 + (float10)1.0));
  piVar2[4] = param_2;
  return;
}

