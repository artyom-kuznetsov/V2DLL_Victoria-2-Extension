// FUN_0084f580 @ 0084f580 body=[[0084f580, 0084f61f]]


void FUN_0084f580(int param_1,float param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_ECX;
  float10 fVar4;
  
  piVar1 = *(int **)(param_1 + 0x88);
  if (piVar1 == (int *)0x0) {
    puVar3 = (undefined4 *)FUN_00aae9af(0x18);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3[1] = 5;
      puVar3[2] = param_1;
      *puVar3 = CAIValueRequest::vftable;
      if (param_2 < 0.0) {
        param_2 = 0.0;
      }
      puVar3[3] = param_2;
      puVar3[4] = param_4;
      *puVar3 = CAIFleetRequest::vftable;
      puVar3[5] = param_3;
    }
    *(undefined4 **)(param_1 + 0x88) = puVar3;
    FUN_0084f170(in_ECX,5,puVar3,1);
    return;
  }
  iVar2 = *piVar1;
  fVar4 = (float10)(**(code **)(iVar2 + 0xc))();
  (**(code **)(iVar2 + 0x1c))((float)(fVar4 + (float10)param_2));
  piVar1[5] = piVar1[5] + param_3;
  return;
}

