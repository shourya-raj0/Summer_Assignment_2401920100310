import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "First Class Compartment";
    }
}

class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Ladies Compartment";
    }
}

class General extends Compartment {
    @Override
    public String notice() {
        return "General Compartment";
    }
}

class Luggage extends Compartment {
    @Override
    public String notice() {
        return "Luggage Compartment";
    }
}

public class TestCompartment {
    public static void main(String[] args) {

        Compartment[] train = new Compartment[10];
        Random rand = new Random();

        for (int i = 0; i < train.length; i++) {
            int randomNum = rand.nextInt(4) + 1; 

            if (randomNum == 1) {
                train[i] = new FirstClass();
            } else if (randomNum == 2) {
                train[i] = new Ladies();
            } else if (randomNum == 3) {
                train[i] = new General();
            } else {
                train[i] = new Luggage();
            }
        }

        System.out.println("Train Compartment Notices");
        for (int i = 0; i < train.length; i++) {
            System.out.println("Compartment " + (i + 1) + " [" + train[i].getClass().getSimpleName() + "]");
            System.out.println("Notice: " + train[i].notice());
            System.out.println();
        }
    }
}
