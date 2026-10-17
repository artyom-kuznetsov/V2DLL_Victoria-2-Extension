// FUN_0048c520 @ 0048c520  (requested 0048C520, first bytes: 55 8B EC 83 EC 18 53 8B)


void FUN_0048c520(uint param_1)

{
  uint in_EAX;
  undefined8 *in_ECX;
  uint *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  if (1 < (int)(param_1 - (int)in_ECX) / 0x14) {
    FUN_0048cc90();
  }
  if (param_1 < in_EAX) {
    puVar1 = (uint *)(param_1 + 0xc);
    iVar2 = ((in_EAX - param_1) - 1) / 0x14 + 1;
    do {
      if (puVar1[-2] == *(uint *)((int)in_ECX + 4)) {
        bVar3 = puVar1[-1] < *(uint *)(in_ECX + 1);
        bVar4 = false;
        if (puVar1[-1] == *(uint *)(in_ECX + 1)) {
          bVar3 = *puVar1 < *(uint *)((int)in_ECX + 0xc);
          bVar4 = false;
          if (*puVar1 == *(uint *)((int)in_ECX + 0xc)) {
            bVar3 = puVar1[1] < *(uint *)(in_ECX + 2);
            bVar4 = puVar1[1] == *(uint *)(in_ECX + 2);
          }
        }
        bVar4 = !bVar3 && !bVar4;
      }
      else {
        bVar4 = (int)*(uint *)((int)in_ECX + 4) < (int)puVar1[-2];
      }
      if (bVar4) {
        *(undefined8 *)(puVar1 + -3) = *in_ECX;
        *(undefined8 *)(puVar1 + -1) = in_ECX[1];
        puVar1[1] = *(uint *)(in_ECX + 2);
        FUN_0048cdd0();
      }
      puVar1 = puVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0048ceb0();
  return;
}

