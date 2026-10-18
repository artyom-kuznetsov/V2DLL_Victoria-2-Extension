// FUN_009b6c10 @ 009b6c10 body=[[009b6c10, 009b6c51]]


int FUN_009b6c10(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int unaff_EDI;
  
  if (in_EAX != unaff_EDI) {
    puVar3 = (undefined8 *)(in_ECX + 8);
    puVar2 = (undefined8 *)(in_EAX + 8);
    do {
      *(undefined4 *)((int)puVar3 + -4) = *(undefined4 *)((int)puVar2 + -4);
      *puVar3 = *puVar2;
      puVar3[1] = puVar2[1];
      *(undefined1 *)(puVar3 + 2) = *(undefined1 *)(puVar2 + 2);
      iVar1 = (int)puVar2 + 0x14;
      in_ECX = in_ECX + 0x1c;
      puVar3 = (undefined8 *)((int)puVar3 + 0x1c);
      puVar2 = (undefined8 *)((int)puVar2 + 0x1c);
    } while (iVar1 != unaff_EDI);
  }
  return in_ECX;
}

