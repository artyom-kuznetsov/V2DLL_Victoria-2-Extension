// FUN_009bfea0 @ 009bfea0 body=[[009bfea0, 009bffa5]]


void FUN_009bfea0(void)

{
  float fVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined4 local_98 [12];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_48 [17];
  
  if (*(char *)(*(int *)(in_ECX + 0x140) + 0x161) == '\0') {
    if (*(char *)(in_ECX + 0x19c) == '\0') {
      puVar2 = (undefined4 *)(in_ECX + 0x94);
    }
    else {
      FUN_00408b00();
      puVar2 = local_48;
    }
    fVar1 = *(float *)(in_ECX + 0x158);
    puVar4 = local_98;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    fVar5 = *(float *)(*(int *)(in_ECX + 0x140) + 0x11c);
    if (0.0 < fVar1) {
      fVar5 = fVar1;
    }
    iVar3 = *(int *)(in_ECX + 0x144);
    *(float *)(iVar3 + 0x120) = fVar5;
    *(float *)(iVar3 + 0x124) = fVar5;
    *(float *)(iVar3 + 0x128) = fVar5;
    puVar2 = (undefined4 *)FUN_009c0a90();
    iVar3 = *(int *)(in_ECX + 0x144);
    *(undefined4 *)(iVar3 + 300) = *puVar2;
    *(undefined4 *)(iVar3 + 0x130) = puVar2[1];
    *(undefined4 *)(iVar3 + 0x134) = puVar2[2];
    *(undefined4 *)(iVar3 + 0x138) = puVar2[3];
    iVar3 = *(int *)(in_ECX + 0x144);
    *(undefined4 *)(iVar3 + 0x114) = local_68;
    *(undefined4 *)(iVar3 + 0x118) = local_64;
    *(undefined4 *)(iVar3 + 0x11c) = local_60;
  }
  return;
}

