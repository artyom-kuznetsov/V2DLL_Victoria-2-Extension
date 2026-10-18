// FUN_0084f4e0 @ 0084f4e0 body=[[0084f4e0, 0084f577]]


void FUN_0084f4e0(int param_1,float param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_ECX;
  float10 fVar3;
  
  if (*(int **)(param_1 + 0x84) == (int *)0x0) {
    puVar2 = (undefined4 *)FUN_00aae9af(0x18);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[1] = 4;
      puVar2[2] = param_1;
      *puVar2 = CAIValueRequest::vftable;
      if (param_2 < 0.0) {
        param_2 = 0.0;
      }
      puVar2[3] = param_2;
      puVar2[4] = param_3;
      *puVar2 = CAIArmyRequest::vftable;
      *(undefined1 *)(puVar2 + 5) = 0;
    }
    *(undefined4 **)(param_1 + 0x84) = puVar2;
    FUN_0084f170(in_ECX,4,puVar2,1);
    return;
  }
  iVar1 = **(int **)(param_1 + 0x84);
  fVar3 = (float10)(**(code **)(iVar1 + 0xc))();
  (**(code **)(iVar1 + 0x1c))((float)(fVar3 + (float10)param_2));
  return;
}

