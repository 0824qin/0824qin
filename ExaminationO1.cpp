#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> 
// �ṹ�����ڴ洢��ѡ����Ϣ
typedef struct {
    char question[200];
    char options[4][50];
    char correctAnswer;
} SingleChoiceQuestion;

// ����������ʾ��ѡ�⼰ѡ��
void displaySingleChoiceQuestion(SingleChoiceQuestion q) {
    printf("%s\n", q.question);
    for (int i = 0; i < 4; i++) {
        printf("%c. %s\n", 'A' + i, q.options[i]);
    }
}

// ���������жϵ�ѡ����Ƿ���ȷ
int isSingleChoiceAnswerCorrect(char answer, char correctAnswer) {
    return (answer == correctAnswer) || (answer == correctAnswer + 32);
}
void swapQuestions(SingleChoiceQuestion *a, SingleChoiceQuestion *b) {
    SingleChoiceQuestion temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // �洢��ѡ������
    SingleChoiceQuestion singleChoiceQuestions[20];

    // ��ʼ��������������������һ��ĵ�ѡ��
    strcpy(singleChoiceQuestions[0].question, "1.������������������һ�ꣿ");
    strcpy(singleChoiceQuestions[0].options[0], "2007");
    strcpy(singleChoiceQuestions[0].options[1], "2008");
    strcpy(singleChoiceQuestions[0].options[2], "2009");
    strcpy(singleChoiceQuestions[0].options[3], "2010");
    singleChoiceQuestions[0].correctAnswer = 'B';

    // ��ʼ�������㷨����Hash�㷨���ǵĵ�ѡ��
    strcpy(singleChoiceQuestions[1].question, "2.�����㷨����Hash�㷨���ǣ�");
    strcpy(singleChoiceQuestions[1].options[0], "DES");
    strcpy(singleChoiceQuestions[1].options[1], "IDEA");
    strcpy(singleChoiceQuestions[1].options[2], "SHA");
    strcpy(singleChoiceQuestions[1].options[3], "RSA");
    singleChoiceQuestions[1].correctAnswer = 'C';

    // ......������ʼ��������ѡ��......

	 // ��ʼ��ϰ��ƽ����Ƕ�����������������Ҫ���������ں�ʱ�ĵ�ѡ��
    strcpy(singleChoiceQuestions[2].question, "3.ϰ��ƽ����Ƕ�����������������Ҫ���������ں�ʱ��");
    strcpy(singleChoiceQuestions[2].options[0], "2018��10��24��");
    strcpy(singleChoiceQuestions[2].options[1], "2019��10��24��");
    strcpy(singleChoiceQuestions[2].options[2], "2019��10��1��");
    strcpy(singleChoiceQuestions[2].options[3], "2018��10��1��");
    singleChoiceQuestions[2].correctAnswer = 'B';
	// ��ʼ����������ҵӦ�õĹؼ��� �ĵ�ѡ��
    strcpy(singleChoiceQuestions[3].question, "4.��������ҵӦ�õĹؼ���");
    strcpy(singleChoiceQuestions[3].options[0], "����������");
    strcpy(singleChoiceQuestions[3].options[1], "��ҵӦ��Э������");
    strcpy(singleChoiceQuestions[3].options[2], "��ҵ�ʽ�");
    strcpy(singleChoiceQuestions[3].options[3], "��ҵ����˲�");
    singleChoiceQuestions[3].correctAnswer = 'B';
	// ��ʼ����ҵ������Ӧ��Э���漰�����һ���ǣ��ĵ�ѡ��
    strcpy(singleChoiceQuestions[4].question, "5.��ҵ������Ӧ��Э���漰�����һ���ǣ�");
    strcpy(singleChoiceQuestions[4].options[0], "��ͬ�����������ͬ��֤��");
    strcpy(singleChoiceQuestions[4].options[1], "�����ʲ�����ת����");
    strcpy(singleChoiceQuestions[4].options[2], "ΪЭ���������ż���");
    strcpy(singleChoiceQuestions[4].options[3], "��ʩ���Ȼ��������");
    singleChoiceQuestions[4].correctAnswer = 'D';
	// ��ʼ����������֤�飬����˵������ȷ���� �ĵ�ѡ��
    strcpy(singleChoiceQuestions[5].question, "6.��������֤�飬����˵������ȷ����");
    strcpy(singleChoiceQuestions[5].options[0], "Ӣ�ķ���digital certificate");
    strcpy(singleChoiceQuestions[5].options[1], "�ṩ��һ����Internet����֤��ݵķ�ʽ");
    strcpy(singleChoiceQuestions[5].options[2], "����������ǩ������");
    strcpy(singleChoiceQuestions[5].options[3], "����ҪȨ��CA����ǩ��");
    singleChoiceQuestions[5].correctAnswer = 'D';
    // ��ʼ��������������������ڲ�ִ�����ʹ�õ���Docker����Ϊ �ĵ�ѡ��
    strcpy(singleChoiceQuestions[6].question, "7.������������������ڲ�ִ�����ʹ�õ���Docker����Ϊ");
    strcpy(singleChoiceQuestions[6].options[0], "docker log");
    strcpy(singleChoiceQuestions[6].options[1], "docker exec");
    strcpy(singleChoiceQuestions[6].options[2], "docker ps");
    strcpy(singleChoiceQuestions[6].options[3], "docker run");
    singleChoiceQuestions[6].correctAnswer = 'B';
	// ��ʼ��FISCO BCOS�����TPS�ɴ���٣��ĵ�ѡ��
    strcpy(singleChoiceQuestions[7].question, "8.FISCO BCOS�����TPS�ɴ���٣�");
    strcpy(singleChoiceQuestions[7].options[0], "1000");
    strcpy(singleChoiceQuestions[7].options[1], "2000");
    strcpy(singleChoiceQuestions[7].options[2], "500");
    strcpy(singleChoiceQuestions[7].options[3], "20000");
    singleChoiceQuestions[7].correctAnswer = 'D';
	// ��ʼ��FISCO BCOS����ܹ��ɷ�Ϊ���㣿�ĵ�ѡ��
    strcpy(singleChoiceQuestions[8].question, "9.FISCO BCOS����ܹ��ɷ�Ϊ���㣿");
    strcpy(singleChoiceQuestions[8].options[0], "3");
    strcpy(singleChoiceQuestions[8].options[1], "5");
    strcpy(singleChoiceQuestions[8].options[2], "4");
    strcpy(singleChoiceQuestions[8].options[3], "2");
    singleChoiceQuestions[8].correctAnswer = 'C';
	// ��ʼ��FISCO BCOS�ӿڲ㲻�������ĵ�ѡ��
    strcpy(singleChoiceQuestions[9].question, "10.FISCO BCOS�ӿڲ㲻������");
    strcpy(singleChoiceQuestions[9].options[0], "���׳�");
    strcpy(singleChoiceQuestions[9].options[1], "������");
    strcpy(singleChoiceQuestions[9].options[2], "����ִ����");
    strcpy(singleChoiceQuestions[9].options[3], "��������");
    singleChoiceQuestions[9].correctAnswer = 'D';
	// ��ʼ��FISCO BCOS���Ȳ��������ģ�飿�ĵ�ѡ��
    strcpy(singleChoiceQuestions[10].question, "11.FISCO BCOS���Ȳ��������ģ�飿");
    strcpy(singleChoiceQuestions[10].options[0], "3");
    strcpy(singleChoiceQuestions[10].options[1], "2");
    strcpy(singleChoiceQuestions[10].options[2], "4");
    strcpy(singleChoiceQuestions[10].options[3], "1");
    singleChoiceQuestions[10].correctAnswer = 'B';
	// ��ʼ�����ܺ�Լ��Ӣ����������һ�����ĵ�ѡ��
    strcpy(singleChoiceQuestions[11].question, "12.���ܺ�Լ��Ӣ����������һ����");
    strcpy(singleChoiceQuestions[11].options[0], "Smart contracts");
    strcpy(singleChoiceQuestions[11].options[1], "Smart contract");
    strcpy(singleChoiceQuestions[11].options[2], "contract Smart");
    strcpy(singleChoiceQuestions[11].options[3], "contracts Smart");
    singleChoiceQuestions[11].correctAnswer = 'B';
	// ��ʼ������̫����������д���ܺ�Լ�������ǣ��ĵ�ѡ��
    strcpy(singleChoiceQuestions[12].question, "13.����̫����������д���ܺ�Լ�������ǣ�");
    strcpy(singleChoiceQuestions[12].options[0], "Go");
    strcpy(singleChoiceQuestions[12].options[1], "Java");
    strcpy(singleChoiceQuestions[12].options[2], "Solidity");
    strcpy(singleChoiceQuestions[12].options[3], "Python");
    singleChoiceQuestions[12].correctAnswer = 'C';
	// ��ʼ����̫���ϵ��пɱ�̵����ܺ�Լ�����ܺ�Լʵ����̫������������е���ô��̫��������ļ����ʲô���ĵ�ѡ��
    strcpy(singleChoiceQuestions[13].question, "14.��̫���ϵ��пɱ�̵����ܺ�Լ�����ܺ�Լʵ����̫������������е���ô��̫��������ļ����ʲô��");
    strcpy(singleChoiceQuestions[13].options[0], "EVN");
    strcpy(singleChoiceQuestions[13].options[1], "ETF");
    strcpy(singleChoiceQuestions[13].options[2], "EVM");
    strcpy(singleChoiceQuestions[13].options[3], "ETH");
    singleChoiceQuestions[13].correctAnswer = 'C';
	// ��ʼ������ǩ��Ϊ��֤�䲻�ɸ��ģ�˫��Լ��ʹ��ʲô���ĵ�ѡ��
   strcpy(singleChoiceQuestions[14].question, "15.����ǩ��Ϊ��֤�䲻�ɸ��ģ�˫��Լ��ʹ��ʲô��");
   strcpy(singleChoiceQuestions[14].options[0], "HASH�㷨");
   strcpy(singleChoiceQuestions[14].options[1], "RSA�㷨");
   strcpy(singleChoiceQuestions[14].options[2], "CAP�㷨");
   strcpy(singleChoiceQuestions[14].options[3], "ACR�㷨");
   singleChoiceQuestions[14].correctAnswer = 'A';
	// ��ʼ�����¹�������ǩ����ȷ���� �ĵ�ѡ��
    strcpy(singleChoiceQuestions[15].question, "16.���¹�������ǩ����ȷ����");
    strcpy(singleChoiceQuestions[15].options[0], "����ǩ����������������ݺ󸽼�һ�κʹ������ݺ��޹�ϵ��������Ϣ");
    strcpy(singleChoiceQuestions[15].options[1], "����ǩ���ܹ�������ݵļ��ܴ��䣬����ȫ��������");
    strcpy(singleChoiceQuestions[15].options[2], "����ǩ��һ����öԳƼ��ܻ���");
    strcpy(singleChoiceQuestions[15].options[3], "����ǩ���ܹ�����۸ġ�α��Ȱ�ȫ������");
	 singleChoiceQuestions[15].correctAnswer = 'D';
		// ��ʼ��ʲôԭ��ֻ֤�з��ͷ�����շ��ܷ�����Ϣ���ݵĵ�ѡ��
    strcpy(singleChoiceQuestions[16].question, "17.ʲôԭ��ֻ֤�з��ͷ�����շ��ܷ�����Ϣ����");
    strcpy(singleChoiceQuestions[16].options[0], "������");
    strcpy(singleChoiceQuestions[16].options[1], "����");
    strcpy(singleChoiceQuestions[16].options[2], "������");
    strcpy(singleChoiceQuestions[16].options[3], "���ʿ���");
    singleChoiceQuestions[16].correctAnswer = 'A';
	// ��ʼ�����������д���Merkle���ṹ����ô���Ϸ��ĳ�Ϊ���ĵ�ѡ��
    strcpy(singleChoiceQuestions[17].question, "18.���������д���Merkle���ṹ����ô���Ϸ��ĳ�Ϊ��");
    strcpy(singleChoiceQuestions[17].options[0], "Merkle֧");
    strcpy(singleChoiceQuestions[17].options[1], "Merkle��");
    strcpy(singleChoiceQuestions[17].options[2], "MerkleҶ");
    strcpy(singleChoiceQuestions[17].options[3], "Merkle��");
    singleChoiceQuestions[17].correctAnswer = 'B';
	// ��ʼ�����������õļ�����������һ��ĵ�ѡ��
    strcpy(singleChoiceQuestions[18].question, "19.���������õļ�����������һ�");
    strcpy(singleChoiceQuestions[18].options[0], "P2P����");
    strcpy(singleChoiceQuestions[18].options[1], "����ѧ");
    strcpy(singleChoiceQuestions[18].options[2], "��ʶ�㷨");
    strcpy(singleChoiceQuestions[18].options[3], "������");
    singleChoiceQuestions[18].correctAnswer = 'D';
	// ��ʼ�������ĸ����������������Եĵ�ѡ��
    strcpy(singleChoiceQuestions[19].question, "20.�����ĸ�����������������");
    strcpy(singleChoiceQuestions[19].options[0], "���ɴ۸�");
    strcpy(singleChoiceQuestions[19].options[1], "ȥ���Ļ�");
    strcpy(singleChoiceQuestions[19].options[2], "����ֵ");
    strcpy(singleChoiceQuestions[19].options[3], "��׷��");
    singleChoiceQuestions[19].correctAnswer = 'C'; // �������������
    srand((unsigned int)time(NULL));
    // ���ҵ�ѡ�������˳��
    for (int i = 19; i > 0; i--) {
        int j = rand() % (i + 1);
        swapQuestions(&singleChoiceQuestions[i], &singleChoiceQuestions[j]);
    }
    char answer;
    int correct;

    // ������ѡ�����飬����ÿ������
    for (int i = 0; i < 20; i++) {
        correct = 0;
        while (!correct) {
            displaySingleChoiceQuestion(singleChoiceQuestions[i]);
            printf("��������Ĵ𰸣�A��B��C��D����");
            scanf(" %c", &answer);

            if (isSingleChoiceAnswerCorrect(answer, singleChoiceQuestions[i].correctAnswer)) {
                printf("����ȷ����ϲ�㡣\n");
                correct = 1;
            } else {
                printf("���ź����𰸴�����ȷ���ǣ�%c��\n", singleChoiceQuestions[i].correctAnswer);
                printf("����������\n");
            }
        }
    }

    return 0;
}
