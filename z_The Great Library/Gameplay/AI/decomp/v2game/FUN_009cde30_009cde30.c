// FUN_009cde30 @ 009cde30 body=[[009cde30, 009cde6a]]


undefined4 FUN_009cde30(void)

{
  char cVar1;
  int in_EAX;
  undefined4 *puVar2;
  
  for (puVar2 = *(undefined4 **)(in_EAX + 0x174);
      (*(undefined4 **)(in_EAX + 0x174) <= puVar2 && (puVar2 < *(undefined4 **)(in_EAX + 0x178)));
      puVar2 = puVar2 + 1) {
    cVar1 = FUN_009d0880(*puVar2);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}

