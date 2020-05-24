#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct TreeNode {
    struct TreeNode* leftchild;
    char data;
    struct TreeNode* rightchild;

}TreeNode;

TreeNode* malloc_Node(char data_malloc, TreeNode* leftchild, TreeNode* rightchild) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = data_malloc;
    node->leftchild = leftchild;
    node->rightchild = rightchild;
    return node;
 }
void Preorder(TreeNode* root); void Inorder(TreeNode* root); void Postorder(TreeNode* root); void Norder_address(TreeNode* root);

int main() {
    int choice;
    printf("[����Ʈ�� ���� ���α׷�]\n\n");
    TreeNode* n31 = malloc_Node('P', NULL, NULL);
    TreeNode* n30 = malloc_Node('O', NULL, NULL);
    TreeNode* n29 = malloc_Node('N', NULL, NULL);
    TreeNode* n28 = malloc_Node('M', NULL, NULL);
    TreeNode* n27 = malloc_Node('L', NULL, NULL);
    TreeNode* n26 = malloc_Node('K', NULL, NULL);
    TreeNode* n25 = malloc_Node('J', NULL, NULL);
    TreeNode* n24 = malloc_Node('I', NULL, NULL);
    TreeNode* n23 = malloc_Node('H', NULL, NULL);
    TreeNode* n22 = malloc_Node('G', NULL, NULL);
    TreeNode* n21 = malloc_Node('F', NULL, NULL);
    TreeNode* n20 = malloc_Node('E', NULL, NULL);
    TreeNode * n19 = malloc_Node('D', NULL, NULL);
    TreeNode * n18 = malloc_Node('C', NULL, NULL);
    TreeNode * n17 = malloc_Node('B', NULL, NULL);
    TreeNode * n16 = malloc_Node('A', NULL, NULL);
    TreeNode * n15 = malloc_Node('-', n30, n31);
    TreeNode* n14 = malloc_Node('+', n28, n29);
    TreeNode* n13 = malloc_Node('-', n26, n27);
    TreeNode* n12 = malloc_Node('+', n24, n25);
    TreeNode* n11 = malloc_Node('-', n22, n23);
    TreeNode* n10 = malloc_Node('+', n20, n21);
    TreeNode* n9 = malloc_Node('-', n18, n19);
    TreeNode* n8 = malloc_Node('+', n16, n17);
    TreeNode* n7 = malloc_Node('/', n14, n15);
    TreeNode* n6 = malloc_Node('*', n12, n13);
    TreeNode* n5 = malloc_Node('/', n10, n11);
    TreeNode* n4 = malloc_Node('*', n8, n9);
    TreeNode* n3 = malloc_Node('-', n6, n7);
    TreeNode* n2 = malloc_Node('+', n4, n5);
    TreeNode* n1 = malloc_Node('*', n2, n3);

    /* ����Ʈ���� ��������
                                                  *
                        +                                                -
             *                       /                       *                       /
       +           -           +           -           +           -           +           -
    A     B     C     D     E     F     G     H     I     J     K     L     M     N     O     P
*/

    printf("  -������ȸ >> 1 \n  -������ȸ >> 2\n  -������ȸ >> 3\n  -������ >> 4\n  -�ּҰ���� >> 5\n  -������ && �ּҰ���� >> 6\n �� �Է��ϼ��� : ");
    scanf_s("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("\n������ȸ ��� : \n"); //[*][+][*][+][A][B][-][C][D][/][+][E][F][-][G][H][-][*][+][I][J][-][K][L][/][+][M][N][-][O][P]
        Preorder(n1);
        printf("\n��¿Ϸ�");
        break;
    case 2:
        printf("\n������ȸ ��� : \n"); //[A][+][B][*][C][-][D][+][E][+][F][/][G][-][H][*][I][+][J][*][K][-][L][-][M][+][N][/][O][-][P]
        printf("\n��¿Ϸ�");
        break;
    case 3:
        printf("\n������ȸ ��� : \n"); //[A][B][+][C][D][-][*][E][F][+][G][H][-][/][+][I][J][+][K][L][-][*][M][N][+][O][P][-][/][-][*]
        Postorder(n1);
        printf("\n��¿Ϸ�");
        break;
    case 4:
        printf("\n��� ���\n");
        printf("\n������ȸ ��� : \n");
        Preorder(n1);
        printf("\n������ȸ ��� : \n");
        Inorder(n1);
        printf("\n������ȸ ��� : \n");
        Postorder(n1);
        printf("\n��¿Ϸ�");
        break;
    case 5:
        printf("������ȸ ������ �ּҰ��� ����մϴ� : \n");
        Norder_address(n1);
        break;
    case 6:
        printf("\n������ && �ּҰ� ���\n");
        printf("\n������ȸ ��� : \n");
        Preorder(n1);
        printf("\n������ȸ ��� : \n");
        Inorder(n1);
        printf("\n������ȸ ��� : \n");
        Postorder(n1);
        printf("\n������ȸ ������ �ּҰ��� ����մϴ� : \n");
        Norder_address(n1);
        printf("��¿Ϸ�\n");
        break;
    default:
        printf("\nError");
        break;
    }
    return 0;
}
/* ����Ʈ���� ��������
                                                      *
                            +                                                -
                 *                       /                       *                       /
           +           -           +           -           +           -           +           -
        A     B     C     D     E     F     G     H     I     J     K     L     M     N     O     P
 */
int num1 = 0;
int num2 = 0;
int num3 = 0;
void Preorder(TreeNode* root) { // ������ȸ
    num1++;
    printf("Preorder %d��° ȣ��\n", num1);
    if (root != NULL) {
        printf("[%c]\n", root->data);
        Preorder(root->leftchild);
        Preorder(root->rightchild);
    }
}

void Inorder(TreeNode* root) { //������ȸ
    num2++;
    printf("Inorder %d��° ȣ��\n", num2);
    if (root != NULL) {
        Inorder(root->leftchild);
        printf("[%c]\n", root->data);
        Inorder(root->rightchild);

    }
}

void Postorder(TreeNode* root) { //������ȸ
    num3++;
    printf("Postorder %d��° ȣ��\n", num3);
    if (root != NULL) {
        Postorder(root->leftchild);
        Postorder(root->rightchild);
        printf("[%c]\n", root->data);
    }
}

void Norder_address(TreeNode *root){
//�ּҰ� ����ϱ�!
    if (root != NULL) {
        Norder_address(root->leftchild);
        printf("\n[%C]�� ������ �ּ� : %d\n", root->data, &root->data);
        printf("[%C]�� left   �ּ� : %d\n", root->data, &root->leftchild);
        printf("[%C]�� right  �ּ� : %d\n", root->data, &root->rightchild);
        Norder_address(root->rightchild);
    }
    
    
}