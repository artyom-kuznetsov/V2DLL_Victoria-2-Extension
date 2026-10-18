// FUN_00852c20 @ 00852c20 body=[[00852c20, 00852ceb]]


void FUN_00852c20(int *param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  float10 fVar5;
  float local_8;
  
  fVar5 = (float10)(**(code **)(*in_ECX + 0xc))();
  local_8 = (float)fVar5;
  fVar5 = (float10)(**(code **)(*param_1 + 0x15c))();
  if (fVar5 < (float10)local_8) {
    fVar5 = (float10)(**(code **)(*param_1 + 0x15c))();
    local_8 = (float)fVar5;
  }
  if (0.0 < local_8) {
    iVar1 = *in_ECX;
    fVar5 = (float10)(**(code **)(iVar1 + 0xc))();
    (**(code **)(iVar1 + 0x1c))((float)(fVar5 - (float10)local_8));
    FUN_00826860(local_8);
    if (((char)param_1[0xf] != '\0') && (cVar2 = (**(code **)(*param_1 + 0xf0))(), cVar2 != '\0')) {
      piVar3 = (int *)(**(code **)(*param_1 + 0xe8))();
      iVar1 = *piVar3;
      uVar4 = (**(code **)(*param_1 + 0xf4))(local_8);
      (**(code **)(iVar1 + 0x1e8))(uVar4);
    }
  }
  return;
}

