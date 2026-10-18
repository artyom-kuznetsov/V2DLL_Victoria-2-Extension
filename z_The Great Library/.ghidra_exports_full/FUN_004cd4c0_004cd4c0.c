// FUN_004cd4c0 @ 004cd4c0 body=[[004cd4c0, 004cd4dc] [004cd4e0, 004cd54f]]


uint FUN_004cd4c0(void)

{
  int iVar1;
  uint in_EAX;
  int *piVar2;
  int in_EDX;
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x80) == 3) {
    in_EAX = 0;
    piVar2 = (int *)(unaff_EDI + 0x98);
    do {
      if (*piVar2 == *(int *)(in_EDX + 4)) {
        if (0 < *(int *)(unaff_EDI + 0x9c + in_EAX * 0x1c)) {
          iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EDX + 4) * 4);
          in_EAX = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x13c) / 1000;
          if ((int)in_EAX <= *(int *)(iVar1 + 0x15c4) - *(int *)(iVar1 + 0x15c0)) {
            return CONCAT31((int3)(in_EAX >> 8),1);
          }
        }
        break;
      }
      in_EAX = in_EAX + 1;
      piVar2 = piVar2 + 7;
    } while ((int)in_EAX < 4);
  }
  return in_EAX & 0xffffff00;
}

