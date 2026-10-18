// FUN_006cb290 @ 006cb290 body=[[006cb290, 006cb365]]


void FUN_006cb290(uint param_1)

{
  uint uVar1;
  bool bVar2;
  uint *in_ECX;
  
  if ((param_1 < in_ECX[1]) && (*in_ECX <= param_1)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar1 = *in_ECX;
    if (in_ECX[1] == in_ECX[2]) {
      FUN_006cb370(1);
    }
    FUN_006cb8c0(in_ECX + 3,in_ECX[1],*in_ECX + ((int)(param_1 - uVar1) >> 2) * 4);
    in_ECX[1] = in_ECX[1] + 4;
  }
  else {
    if (in_ECX[1] == in_ECX[2]) {
      FUN_006cb370(1);
    }
    FUN_006cb900(in_ECX + 3,in_ECX[1],param_1);
    in_ECX[1] = in_ECX[1] + 4;
  }
  return;
}

