// FUN_004a8330 @ 004a8330 body=[[004a8330, 004a83ba]]


uint FUN_004a8330(void)

{
  uint in_EAX;
  int in_EDX;
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0x74) == 0) && (*(char *)(unaff_ESI + 0x104) == '\0')) {
    in_EAX = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_ESI + 0xc4) * 4);
    if ((*(int *)(in_EDX + 0x134) != *(int *)(in_EAX + 0x20)) &&
       (((*(int *)(*(int *)(*(int *)(in_EAX + 0xbe8) + *(int *)(in_EDX + 0x134) * 4) + 0x34) != 0 ||
         (((*(char *)(in_EDX + 0x130) == 'R' && (*(char *)(in_EDX + 0x131) == 'E')) &&
          (*(char *)(in_EDX + 0x132) == 'B')))) ||
        (((*(char *)(in_EAX + 0x1c) == 'R' && (*(char *)(in_EAX + 0x1d) == 'E')) &&
         (*(char *)(in_EAX + 0x1e) == 'B')))))) {
      return CONCAT31((int3)(in_EAX >> 8),0 < *(int *)(unaff_ESI + 0x40));
    }
  }
  return in_EAX & 0xffffff00;
}

