// FUN_0093bcc0 @ 0093bcc0 body=[[0093bcc0, 0093bd27]]


int FUN_0093bcc0(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  iVar3 = 0;
  puVar5 = (undefined4 *)**(undefined4 **)(in_ECX + 0xe0);
  do {
    do {
      while( true ) {
        do {
          puVar4 = puVar5;
          if (puVar4 == *(undefined4 **)(in_ECX + 0xe0)) {
            return iVar3;
          }
          iVar3 = iVar3 + ((int)(puVar4[5] - puVar4[4]) >> 6);
          puVar5 = puVar4;
        } while (*(char *)((int)puVar4 + 0x21) != '\0');
        puVar5 = (undefined4 *)puVar4[2];
        if (*(char *)((int)puVar5 + 0x21) != '\0') break;
        cVar1 = *(char *)((int)*puVar5 + 0x21);
        puVar4 = (undefined4 *)*puVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x21);
          puVar5 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      puVar5 = (undefined4 *)puVar4[1];
    } while (*(char *)((int)puVar5 + 0x21) != '\0');
    do {
      if (puVar4 != (undefined4 *)puVar5[2]) break;
      puVar2 = (undefined4 *)puVar5[1];
      puVar4 = puVar5;
      puVar5 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  } while( true );
}

