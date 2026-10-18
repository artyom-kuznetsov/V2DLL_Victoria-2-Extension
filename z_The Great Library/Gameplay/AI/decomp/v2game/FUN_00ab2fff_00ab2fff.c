// _store_num @ 00ab2fff body=[[00ab2fff, 00ab3079]]


/* Library Function - Single Match
    void __cdecl _store_num(int,int,char * *,unsigned int *,unsigned int)
   
   Library: Visual Studio 2010 Release */

void __cdecl _store_num(int param_1,int param_2,char **param_3,uint *param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  char *pcVar4;
  uint *in_ECX;
  uint in_EDX;
  char *pcVar5;
  int *unaff_EDI;
  int local_8;
  
  local_8 = 0;
  if (param_1 == 0) {
    if (in_EDX < *in_ECX) {
      iVar3 = in_EDX - 1;
      if (in_EDX != 0) {
        do {
          local_8 = local_8 + 1;
          *(char *)(iVar3 + *unaff_EDI) = (char)(in_EAX % 10) + '0';
          iVar3 = iVar3 + -1;
          in_EAX = in_EAX / 10;
        } while (iVar3 != -1);
      }
      *unaff_EDI = *unaff_EDI + local_8;
      *in_ECX = *in_ECX - local_8;
    }
    else {
      *in_ECX = 0;
    }
  }
  else {
    uVar2 = *in_ECX;
    pcVar5 = (char *)*unaff_EDI;
    do {
      if (uVar2 < 2) break;
      iVar3 = in_EAX / 10;
      *pcVar5 = (char)(in_EAX % 10) + '0';
      pcVar5 = pcVar5 + 1;
      *in_ECX = *in_ECX - 1;
      uVar2 = *in_ECX;
      in_EAX = iVar3;
    } while (0 < iVar3);
    pcVar4 = (char *)*unaff_EDI;
    *unaff_EDI = (int)pcVar5;
    pcVar5 = pcVar5 + -1;
    do {
      cVar1 = *pcVar5;
      *pcVar5 = *pcVar4;
      pcVar5 = pcVar5 + -1;
      *pcVar4 = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (pcVar4 < pcVar5);
  }
  return;
}

