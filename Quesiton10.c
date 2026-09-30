#include <stdio.h>
int main() {
    double accuracy, confidence;
    int datasetSize, role, flags;
    printf("Enter Accuracy (0-100): ");
    scanf("%lf", &accuracy);
    printf("Enter Confidence score (0-100): ");
    scanf("%lf", &confidence);
    printf("Enter Dataset size: ");
    scanf("%d", &datasetSize);
    printf("Enter User role (1 = Intern, 2 = Engineer, 3 = Admin): ");
    scanf("%d", &role);
    printf("Enter Status flags (bitwise integer): ");
    scanf("%d", &flags);

    int TRAINED = 1;
    int VALIDATED = 2;
    int APPROVED = 4;
    int DEPRECATED = 8;

    double datasetFactor = datasetSize / 1000.0;
    if (datasetFactor > 10.0) {
        datasetFactor = 10.0;
    }

    double modelScore = (accuracy * 0.5) + (confidence * 0.3) + (datasetFactor * 2.0);

    printf("\nModel Score: %.2f\n", modelScore);

    if (flags & DEPRECATED) {
        printf("Rejected: model deprecated\n");
    } 
    else if (!(flags & TRAINED)) {
        printf("Rejected: not trained\n");
    } 
    else if (!(flags & VALIDATED)) {
        printf("Rejected: not validated\n");
    } 
    else if (!(flags & APPROVED)) {
        printf("Pending: awaiting approval\n");
    } 
    else if (accuracy < 70 || confidence < 60) {
        printf("Rejected: performance too low\n");
    } 
    else if (datasetSize < 5000) {
        printf("Rejected: dataset too small\n");
    } 
    else if (role == 1) {
        printf("Denied: interns cannot deploy\n");
    } 
    else if (role == 2 && modelScore < 80) {
        printf("Denied: engineer needs higher score\n");
    } 
    else {
        printf("Approved for deployment\n");
    }
    printf("\n--- Memory Footprint (sizeof) ---\n");
    printf("sizeof(accuracy): %lu bytes\n", sizeof(accuracy));
    printf("sizeof(confidence): %lu bytes\n", sizeof(confidence));
    printf("sizeof(datasetSize): %lu bytes\n", sizeof(datasetSize));
    printf("sizeof(role): %lu bytes\n", sizeof(role));
    printf("sizeof(flags): %lu bytes\n", sizeof(flags));
    double avgAccConf = (accuracy + confidence) / 2.0;
    if (modelScore > avgAccConf) {
        printf("Model score is ABOVE the average of accuracy and confidence (%.2f vs %.2f)\n", modelScore, avgAccConf);
    } else {
        printf("Model score is NOT above the average of accuracy and confidence (%.2f vs %.2f)\n", modelScore, avgAccConf);
    }

    return 0;
}