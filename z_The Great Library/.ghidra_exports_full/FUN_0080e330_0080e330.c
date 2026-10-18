// FUN_0080e330 @ 0080e330 body=[[0080e330, 0080e409]]


void FUN_0080e330(int param_1)

{
  uint uVar1;
  int in_ECX;
  float *pfVar2;
  float local_10;
  float local_c;
  float local_8;
  
  D3DXVec3TransformCoord(&local_10,in_ECX + 0x154,in_ECX + 0x94);
  uVar1 = 0;
  pfVar2 = (float *)(param_1 + 800);
  do {
    if (pfVar2[-2] * local_10 + pfVar2[-1] * local_c + local_8 * *pfVar2 + pfVar2[1] <
        -*(float *)(in_ECX + 0x160)) {
      *(undefined1 *)(in_ECX + 0x4d) = 0;
      return;
    }
    uVar1 = uVar1 + 1;
    pfVar2 = pfVar2 + 4;
  } while (uVar1 < 6);
  *(undefined1 *)(in_ECX + 0x4d) = 1;
  return;
}

